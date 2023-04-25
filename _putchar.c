#include "main.h"

/**
 * _putchar - prints character on stdout
 *@c: pointer to char
 *@nchar: number of bytes to print
 *Return: number of bytes printed.
 */
int print_buf(char *c, unsigned int nchar)
{
	return (write(1, c, nchar));
}
