#include <stdio.h>

int isBaseTwo(unsigned int toCheck)
{
    int digit;
    for (; toCheck > 0; toCheck /= 10)
    {
        digit = toCheck % 10;
        if (digit != 0 && digit != 1)
        {
            return 0;
        }
    }
    return 1;
}

unsigned int getNum()
{
    int num, inputSucces;
    printf("Please insert a number in base two (zero or ones only).\n");
    inputSucces = scanf("%d", &num);
    if (inputSucces != 0 && isBaseTwo((unsigned int)num))
    {
        printf("Got %d\n", num);
        return num;
    }
    printf("Invalid input or not a base two number.\n");
    return num;
}
