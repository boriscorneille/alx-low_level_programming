#include <stdio.h>


/**
 * main - print all possible different combinations of two digit
 *
 * Return: always (success)
 */
int main(void)
{
	int i;
	int n;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (n = '0' ; n <= '9'; n++)
		{
			if (i<n)
			{
				putchar('i');
				putchar('n');
			}
			if (i != '8' || n != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
