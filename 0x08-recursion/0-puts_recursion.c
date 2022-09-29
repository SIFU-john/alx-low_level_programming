<<<<<<< HEAD
`
=======
#include "main.h"
/**
* _puts_recursion - prints a string, followed by a new line
* @s: string to print
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
>>>>>>> 270c8cde5cdba0c25710a37c35dd5d29b6b2f243
