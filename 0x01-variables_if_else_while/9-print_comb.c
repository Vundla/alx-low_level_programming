#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
       {
	int a;
 	
	for (a = 0; a < 10, 1++)

		putchar(a + '0');
	if (a < 9)
	{
		putchar(a +'0');
		if (a < 9)
		{
			putchar(',');
			putcgar('');
		}
	}
	putchar('\n');
	return(0);
       }
