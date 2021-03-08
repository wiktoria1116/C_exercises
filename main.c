/*
Write a C program to compute the sum of the numbers in a given array except those numbers starting with 5 followed by atleast one 6.
*/
#include <stdio.h>
#include <stdlib.h>

int sum(int array[], int array_size)
{
    int sum = 0;

    for(int i = 0; i < array_size; i++)
    {
        if(array[i] == 5 && array[i+1] == 6)
        {
            i += 2;
            if( i < array_size)
            {
                sum = sum + array[i];
            }
        }
        else
        {
            sum = sum + array[i];
        }
    }

    return sum;
}

int main()
{
    int array[] = {7, 5, 6, 1, 4, 2, 5, 6};
    int array_size = sizeof(array)/sizeof(array[0]);
    //printf("%d", array_size);
    printf("%d ", sum(array, array_size));
    return 0;
}
