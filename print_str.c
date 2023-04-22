#include <stdio.h>
#include "main.h"

/**
 * print_str - prints strings to stdout
 * @str: char pointer to the string
 * Return: int.
 */
int print_str(char *str)
{
	int scount;

	if (str != NULL)
	{
		for (scount = 0; str[scount]; scount++)
		{
			_putchar(str[scount]);
		}
	}
	else
	{
		return (0);
	}
	/*
	 *puts(str);
	 */
	return (scount);
}
