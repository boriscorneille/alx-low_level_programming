#include <stdio.h>


/**
 * main - print alphabet except q and e
 *
 * retun: always (success)
 */
int main()
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	printf("\n");
	return (0);
}
