#include <stdarg.h>
#include <stdio.h>
#include "main.h"

#define BUFF_SIZE 1024

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int printed = 0;
    int buff_ind = 0;
    char buffer[BUFF_SIZE];

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == '%')
            {
                buffer[buff_ind++] = '%';
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            }
            else if (*format == 'c')
            {
                int ch = va_arg(args, int);
                buffer[buff_ind++] = ch;
                if (buff_ind == BUFF_SIZE)
                {
                    print_buffer(buffer, &buff_ind);
                    count += buff_ind;
                }
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char *);
                while (*str)
                {
                    buffer[buff_ind++] = *str;
                    str++;
                    if (buff_ind == BUFF_SIZE)
                    {
                        print_buffer(buffer, &buff_ind);
                        count += buff_ind;
                    }
                }
            }
            else if (*format == 'd' || *format == 'i')
            {
                int value = va_arg(args, int);
                printed = print_integer(value);
                count += printed;
            }
        }
        else
        {
            buffer[buff_ind++] = *format;
            if (buff_ind == BUFF_SIZE)
            {
                print_buffer(buffer, &buff_ind);
                count += buff_ind;
            }
        }
        format++;
    }
    print_buffer(buffer, &buff_ind);
    count += buff_ind;
    va_end(args);
    return count;
}

