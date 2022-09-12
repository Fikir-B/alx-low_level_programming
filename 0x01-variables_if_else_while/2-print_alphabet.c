#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: entry point
 *
 * Description : main will list a to z
 * return:0
 */
int main(void)
{
	char low;

        for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	printf("\n");
	
	return (0);
}
