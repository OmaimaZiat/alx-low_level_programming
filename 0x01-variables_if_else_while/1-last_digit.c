#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - a program will assign a random number to the variable n each time it is executed
 * Return: 0 always
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x > 5)
		printf("the last digit of %d is %d and  greater than 5", n, x);
	else if (x == 0)
		printf("the last digit of %d is %d and is zero", n, x);
	else if (x < 6 && x != 0)
		printf("the last digit of %d is %d less than 6 and not 0", n, x);
	printf("\n");
	return (0);
}
