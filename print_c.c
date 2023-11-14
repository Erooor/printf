#include "main.h"
#include <stdio.h>
/**
 * print_c - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	putchar(s);
	return (1);
}
