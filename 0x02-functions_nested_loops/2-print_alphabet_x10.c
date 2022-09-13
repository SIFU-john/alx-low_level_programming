#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
	char yk;
	int i;

	i = 0;

	while (i < 10)
	{
		yk = 'a';
		while (yk <= 'z')
		{
			_putchar(ay);
			yk++;
		}
		_putchar('\n');
		i++;
	}
}
