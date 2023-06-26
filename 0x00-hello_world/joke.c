#include <stdio.h>

int main(void)
{
	int a, b;
	
	for (a =0, b =1 ;a < 5, b < 10 ; b++);
	{
		printf("%d %d\n", a, b);
		a++;
	}
	return (0);
}
