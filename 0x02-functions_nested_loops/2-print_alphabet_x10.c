#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char lc;

	while (count++ <= 9)
	{
		for (lc = 'a'; <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
