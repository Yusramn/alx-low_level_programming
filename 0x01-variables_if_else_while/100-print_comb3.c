#include <stdio.h>
/**
 * main - prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
		putchar(e);
		putchar(i);
		if (i == 57 && e == 56)
		{
				break;
		}
		putchar(',');
		putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
