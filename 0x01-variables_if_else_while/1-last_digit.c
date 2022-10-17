#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-program entry point
 *
 * Return: 0 if no error, non-zero value if error
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	idigit = n % 10;
	if (idigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, idigit);
	}
	else if (idigit == 0)
	{
		printf("Last digit of %d is &d and is 0\n", n, idigit);
	}
	else if (idigit < 6 & idigit != 0)
	{
		printf("last digit of %d is %d and is Less than 6 and not 0\n", n, idigit);
	}
	return (0);
}
