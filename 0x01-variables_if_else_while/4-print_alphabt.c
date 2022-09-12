#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
 	char low, e, q;

	e = 'e';
	q = 'q';

        for (low = 'a'; low <= 'z'; low++)
		       	putchar(low)
		{
			if (low != e && low != q)
				putchar(low);
		}
	printf("\n");
	
	return (0);
}
