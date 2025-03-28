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

    int min = -1; // Initialize min with -1 to ensure proper min detection

    for (int i = 0; i < n; i++) // loop for counting the 'number' variable
    {
        max = 0;
        min = -1;
        number = 0;  // Reset number count for each iteration

        for (int j = 0; j < n; j++) // to find max and min
        {
            if (max <= init_air[j])
            {
                max = init_air[j]; // max value
            }
            if ((min == -1 || min > init_air[j]) && init_air[j] > 0)
            {
                min = init_air[j]; // min value
            }
        }

        for(int j = 0; j < n; j++)  // Fixed uninitialized loop variable
        {
            if(init_air[j] > 0)
                number++;
        }
        printf("%d\n", number);

        for (int j = 0; j < n; j++)
        {
            if(init_air[j] > 0)
                init_air[j] -= min;
        }

        if (max == 0) // Stop loop if max is 0
            break;
    }
    return 0;
}
