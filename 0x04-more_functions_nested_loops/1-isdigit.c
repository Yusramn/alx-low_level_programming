#include"main.h"
#include <stdio.h>

/**
 * -isdigit - a fuction that checks for a digit(0 through 9).
 * @c - input
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if(c >= 48 && c <= 57 )
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
