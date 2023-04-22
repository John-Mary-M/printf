#include <stdio.h>
#include <main.h>


/**
 * print_array - print arry to stdout
 * @arrayname: array name to print
 * @size: Length of the array.
 * Return: 0 on success.
*/
int print_arry(char *array)
{
	int i = 0, size;

	/*determine size of parsed array*/
	size = sizeof(array) / sizeof(array[0]);

	for (i = 0; i <= size; i++)
	{
		putc(array[i], stdout);
	}
	return (0);
}
