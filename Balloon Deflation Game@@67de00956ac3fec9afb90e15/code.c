#include <stdio.h>

int main()
{
    int n; // number of balloons
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int init_air[n]; // array containing the initial air in n balloons
    int number = 0;  // count of balloons with air more than 0
    int max = 0;     // to check the maximum value of air filled in the array

    for (int i = 0; i < n; i++) // loop for input of init_air
    {
        scanf("%d", &init_air[i]);
    }

    while (1) // Run until all balloons are empty
    {
        max = 0;
        int min = __INT_MAX__; // Set min to a very large value

        number = 0;  // Reset number count for each iteration

        for (int j = 0; j < n; j++) // Find max and min
        {
            if (init_air[j] > max)
            {
                max = init_air[j]; // max value
            }
            if (init_air[j] > 0 && init_air[j] < min)
            {
                min = init_air[j]; // min value
            }
        }

        if (max == 0) // Stop loop if all balloons are empty
            break;

        for (int j = 0; j < n; j++) // Count non-zero balloons
        {
            if (init_air[j] > 0)
                number++;
        }

        printf("%d\n", number);

        for (int j = 0; j < n; j++) // Reduce air by min
        {
            if (init_air[j] > 0)
                init_air[j] -= min;
        }
    }

    return 0;
}
