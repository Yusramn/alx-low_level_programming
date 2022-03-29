<<<<<<< HEAD
#include "main.h"

=======
#include"main.h"
>>>>>>> 86b67788e40f8c7ee76413baad60dd6590ca7b37
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: dest positions
 * @src: source position
 * @n: size of bytes
 * Return: char
 */
<<<<<<< HEAD
=======

>>>>>>> 86b67788e40f8c7ee76413baad60dd6590ca7b37
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
