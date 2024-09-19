#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned int *getNumbers()
{
    unsigned int* numbers = (unsigned int*)malloc(2 * sizeof(unsigned int)); 
    int isSuccess = 0;
    printf("Please insert two unsigned numbers separated by spaces:\n");
    do
    {
        isSuccess = scanf("%u %u", &numbers[0], &numbers[1]);
        if (isSuccess != 2 || numbers[0] > UINT_MAX || numbers[1] > UINT_MAX)
        {
            printf("Invalid input. Please enter two valid unsigned numbers again.\n");
            while (getchar() != '\n'){}
        }
    } while (isSuccess != 2);
    return numbers;
}