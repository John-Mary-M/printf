#include "main.h"

/**
 * _print_num - prints integers to stdout
 * @n: number to print
 * Return: int count.
*/
int _print_num(int n)
{
	int digit, sign, rcount = 0, temp[255];

	if (n < 0)
	{
		sign = -1;
		n = n * -1;
		rcount += _putchar('-');
	}
	else
	{
		sign = -1;
	}
	if (n == 0)
	{
		return (_putchar('0'));
	}
	int i = 0;

	while (n > 0)
	{
		temp[i] = n % 10;
		n /= 10;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		rcount += _putchar(temp[j] + '0');
	}
	if (sign == -1)
	{
		rcount++;
	}
	return (rcount);
}
