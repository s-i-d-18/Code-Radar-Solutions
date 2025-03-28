#include <stdio.h>

void main()
{
    int n; // number of balloons
    scanf("%d", &n);

    int init_air[n]; // array containin the initial air in n balloons
    int number = 0;  // count of balloons with air more than 0
    int max = 0;     // to check the maximum value of air filled in the array

    for (int i = 0; i < n; i++) // loop for input of init_air
    {
        scanf("%d", init_air[i]);
    }

    int min = init_air[0]; // to subtract from the array elements

    for (int i = 0; i < n; i++) // loop for counting the 'number' variable
    {

        for (int j = 0; j < n; j++) // to find max and min
        {
            if (max <= init_air[j])
            {
                max = init_air[j]; // max value
            }
            if (min >= init_air[j] && init_air[j] > 0)
            {
                min = init_air[j]; // min value
            }
        }

        for(int j; j<n; j++){
            if(init_air[j]>0)
            number++;
        }
        printf("%d", number);
        printf("\n");

        for (int j = 0; j < n; j++)
        {
            init_air[j] = init_air[j] - min;
        }

        if(max == 0)
        break;
        
    }
}