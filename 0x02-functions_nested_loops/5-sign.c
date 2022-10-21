#include "main.h"

/**
 *  * print_sign - function to check  for a sign of a number
 *   *@n:	is the int that will be use as the arguement of the function
 *    * Return: Always 0 (Success)
 *     */

int print_sign(int n)
{
		if (n > 0)
				{
							_putchar('+');
									return (1);
										}
			else if (n == 0)
					{
								_putchar('0');
										return (0);
											}
				else
						{
									_putchar ('-');
											return (-1);
												}
}
