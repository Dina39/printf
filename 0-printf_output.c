#include "main.h"
#include <stdlib.h>
/**
* _printf - output according to format.
* @format: character string.
* Return: number of characters.
*/
int printf_(const char *format, ...)
{
unsigned int i = 0, count = 0;
va_list valist;
int (*f)(va_list);
if (format == NULL)
return (-1);
va_start(valist, format);
while (format[i])
{
for (; format[i] != '%' && format[i]; i++)
{
_putchar(format[i]);
count++;
}
if (!format[i])
return (count);
if (f != NULL)
{
count += f(valist);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
count++;
if (format[i + 1] == '%')
i += 2;
else
i++;
}
va_end(valist);
return (count);
}
