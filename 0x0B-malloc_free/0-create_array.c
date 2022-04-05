#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @c: character.
 * @size: size of the array.
 * Return:  pointer to the array, or (NULL) if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;
	if(size == 0)
	{
		return (NULL);
	}
	ptr= malloc(sizeof(char) *size);
	if (ptr == NULL)
	{
		return (NULL);
	}
					  for (i = 0; i < size; i++)
	{
		ptr[i] = c;
					  }
					  return (ptr);
}

