#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *  followed by a new line
 *  Return:Always 0 (sucess)
 */

void print_alphabet_x10(void)
{
	char letter;

	int i;

	for (i = 0; i < 10; i++)

{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
}
