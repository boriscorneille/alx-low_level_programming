#include <stdio.h>


/**
 * main - prints all possible different combinations of three digits
 *
 * Return:0 (success)
 */
int main(void)
{
	int i,l,n;

	for ( i = '0'; i<= '9'; i++)
	{
		for ( l = '0'; l<= '9'; l++)
		{
			for ( n = '0'; n<= '9'; n++)
			{
				if ( i<l && l<n)
				{
					putchar(i);
					putchar(l);
					putchar(n);
					if ( i != '7')
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
