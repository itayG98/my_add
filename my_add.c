#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "input.h"

int main()
{
    unsigned int* numbers = (int *)getNumbers();
    printf("The numbers are %u and  %u\n", numbers[0], numbers[1]);
    printf("Press any key to continue...\n");
    _getch();
    free(numbers);
    return 0;
}
