#include "main.h"

/**
 * jack_bauer - prints every minute of the day in format 00:00
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;
	
	for (h1 = '0'; h1 <= '2'; ++h1)
	{
		for (h2 = '0'; h2 <= '4'; ++h2)
		{
			for (m1 = '0'; m1 <= '5'; ++m1)
			{
				for (m2 = '0'; m2 <= '9'; ++m2)
				{
					if (h1 == '2' && h2 == '4')
						break;
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}	
			}
		}
	}			
}
