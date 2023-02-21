#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Prints if number is positive or negative and prints the last digit with given parameters
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n, last, upper, lower;
	upper = 100;
	lower = -100;

	srand(time(NULL));
	n = rand() % (upper - lower + 1) + lower;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5", n ,last);
	
	else if (last == 0)
		printf("Last digit of %d is %d and is 0", n , last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n , last);


	return 0;
}
