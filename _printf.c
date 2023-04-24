#include "main.h"
/**
 *_printf - formatted output conversion and print data.
 * @format: input string.
 *Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
int i, rcount = 0;
va_list args;

if (format == NULL)
return (-10);
va_start(args, format);
for (i = 0; format[i]; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
rcount++;
}
else
{
switch (format[++i])
{
case 'c':
_putchar(va_arg(args, int));
rcount++;
break;
case 's':
/*
*_putchar(va_arg(args, int));
*/
rcount += print_str(va_arg(args, char *));
break;
case '%':
_putchar('%');
rcount++;
break;
case 'd':
case 'i':
rcount += _print_num(va_arg(args, int));
break;
}
}
}
va_end(args);
return (rcount);
}
