#include "main.h"
/**
 * print_sign - to check the sign of a number
 * @n: is character to check
 * Return: 1 n>0 return 0 n=0 returns -1 n<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	}
	return (1);
}
          else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
