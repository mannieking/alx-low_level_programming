#include <stdio.h>
#include "main.h"

/**
 * print_square - function that draws a square line on the terminal.
 * @size: used parameter
 * Reture: return nothing
 */
void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; inc1++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
