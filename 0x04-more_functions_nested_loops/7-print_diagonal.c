#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: print int
 * return: Always 0.
 */

void print_diagonal(int n)
{
	int i = 0;
	int b = 0;

	while (i < n)
	{
		while (b <= i)
		{
			if (b != i)
		
				_putchar (' ');
			else
			
				_putchar (92);
			b += 1;
	}
		_putchar ('\n');
		i += 1;
		b = 0;
	}
	if(n <= 0)
		_putchar ('\n');
	
}


