#include "main.h"
/**
 * _isolwer - returns 1 if lowercase 0 otherwise
 *@c: takes in a character
 * Return:0 for uppercase,1 fo lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
