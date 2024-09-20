#include <stdio.h>
#include <conio.h>

/**
 * @brief Entry point for the binary representation demonstration.
 *
 * This function prompts the user for an unsigned integer, reads the input, 
 * and calls `print_binary` to display its binary representation by division 
 * and `print_binary_with_mask` to print it bit by bit using bitwise operations.
 * The user is prompted to press any key before the program terminates.
 * *
 * Example usage:
 * @code
 *    // Input "5" results in:
 *    // print_binary: 101
 *    // print_binary_with_mask: 00000000000000000000000000000101
 * @endcode
 */
int main()
{
    unsigned int a;
    printf("Please insert unsigned number.\n");
    scanf("%u", &a);
    print_binary(a);
    print_binary_with_mask(a);
    printf("Press any key to continue...\n");
    _getch();
    return 1;
}

/**
 * @brief Converts an unsigned integer to its binary representation and then prints it via stdout.
 *
 * This function converts a given unsigned integer to its binary representation by repeatedly
 * dividing the number by 2 and capturing the remainder (binary digit). The binary number is
 * stored as a decimal number, and then printed.
 *
 * @param toPrint The unsigned integer to be printed in binary representation. *
 * Example usage:
 * @code
 *    print_binary(5) print 101
 * @endcode
 */
int print_binary(unsigned toPrint)
{
    unsigned int binaryRes = 0, reminder = 0, i = 1;
    while (toPrint > 0)
    {
        reminder = toPrint % 2;
        toPrint = toPrint / 2;
        binaryRes = binaryRes + (reminder * i);
        i = i * 10;
    }
    printf("The number is: %u\n", binaryRes);
    return 1;
}

/**
 * @brief Prints the binary representation of an unsigned integer, bit by bit via stdout.
 *
 * This function takes an unsigned integer and prints its binary representation 
 * directly, bit by bit. It uses a mask starting at the most significant bit (MSB)
 * and shifts the mask right on each iteration to check each bit. For each bit, 
 * it prints either '1' or '0' depending on whether the bit is set.
 *
 * @param toPrint The unsigned integer whose binary representation will be printed.
 *
 * Example usage:
 * @code
 *    print_binary_with_mask(5); // prints "00000000000000000000000000000101"
 * @endcode
 */
int print_binary_with_mask(unsigned toPrint)
{
    int bits_number = sizeof(toPrint) * 8;
    int i = 0;
    unsigned int mask = 1 << (bits_number- 1);
    while (i < bits_number)
    {
        printf("%c",(mask & toPrint) ? '1' : '0');
        mask >>= 1;
        i++;
    }
      printf("\n");
    return 1;
}
