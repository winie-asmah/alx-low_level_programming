#include "main.h"
/**
 * _isdigit -checks if a character is a digit(0-90
 * @c: the character to be checked
 * Return: 1 is c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
