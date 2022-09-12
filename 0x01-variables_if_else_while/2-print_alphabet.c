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
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
