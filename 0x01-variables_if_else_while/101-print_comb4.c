#include <stdio.h>

/**
 *print possible different three digits number
 *
 */
int main(void)
{
	int n, m, p;
	for (n = 48; n <= 55; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			for (p = 50; p <= 57; p++)
			{
				if (p >m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
