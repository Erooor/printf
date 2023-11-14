#include "main.h"
#include <stdio.h>

#define BUFF_SIZE 1024

/**
 * print_integer - print the digit value
 * @value: the value passed by _printf
 *
 * Return: the value printed
 */

int print_integer(int value)
{
    char buffer[32];
    int printed = 0;
    int i = 0;
    
    if (value < 0)
    {
        putchar('-');
        printed++;
        value = -value;
    }
    do
    {
        buffer[i++] = '0' + (value % 10);
        value /= 10;
        printed++;
    } while (value > 0);
    {
	    int j = i - 1;
            while (j >= 0)
    {
        putchar(buffer[j]);
	j--;
    }
    }
    return (printed);
}
