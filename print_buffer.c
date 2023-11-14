#include "main.h"
#include <stdio.h>

#define BUFF_SIZE 1024
/**
 * print_buffer - print the content of the buffer
 * @buffer[]: hold the string to print
 * @*buff_ind: the lenght of the array
 *
 * Return: 0 if succes
 */

void print_buffer(char buffer[], int *buff_ind)
{
    int i = 0;

    if (*buff_ind > 0)
    {
        while (i < *buff_ind)
        {
            putchar(buffer[i]);
	    i++;
        }
    }
    *buff_ind = 0;
}
