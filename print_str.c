#include "main.h"

/**
 * print_str - writes the string to stdout
 * @prargs: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list prargs, char *buf, unsigned int ibuf)
{
	char *ptrstr;
	unsigned int i;
	char nill[] = "(null)";

	ptrstr = va_arg(prargs, char *);
	if (ptrstr == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (66);
	}
	for (i = 0; ptrstr[i]; i++)
		ibuf = handl_buf(buf, ptrstr[i], ibuf);
	return (i);
}
