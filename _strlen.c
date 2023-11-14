#include <stdio.h>
#include "main.h"

/**
 * _strlen -   returns the length of a string.
 * @s: The value of the string
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
