#include "main.h"
/**
 * _strcat - appends src to the dest string.
 *@dest: string to append by src
 *@src: string to append to dest
 * Return: address of dest
 */
char *_strcat(char *dest, char *src);
{
int x,y;

	x=0;
	while (dest[x]!= '/0')
		x++
			y=0;
	while (src[y])!='/0')
	{
		dest[x] = src[y]
			x++
			y++
	}
	return(dest);
}
