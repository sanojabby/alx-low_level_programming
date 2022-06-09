#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: character to be checked
 * Return: always last  digit
 */

int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
	{
	_putchar(-a + 48);
	return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
