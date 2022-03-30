include"main.h"
/**
 * wildcmp - function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
 * @s1: the first input string
 * @s2: the second input string
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if(*s1 == *s2)
		return 1;
	else if( *s1 != *s2 )
		return 0;
}
