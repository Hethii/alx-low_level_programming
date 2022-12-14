#include "main.h"

/**
 * _isalpha - checks if character is a letter both lowercase or uppercase
 *
 * @c: takes input from other function
 *
 * Return: returns 1 if `c` is true otherwise always 0 (Success)
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
