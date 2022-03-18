#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
