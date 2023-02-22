#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @i: is the int that will use for argument of the funtion
 * Return: 0
 */

int _abs(int i)
{
	if (i > 0 || i == 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
