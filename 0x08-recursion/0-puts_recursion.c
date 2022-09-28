#include "main.h"

/**
 * function that prints a string
 * followed by new line
 *
 * @s: the string
 *
 * Return: 0
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
