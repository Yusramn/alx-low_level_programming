#include "main.h"
/**
 * int_strlen:Returns the length of the sring.
 * @s: input string.
 * Return - length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

		
