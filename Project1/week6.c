#include <stdio.h>

void	sumAndNum(int num) {
	int	i;
	int	result;

	result = 0;
	for (i = 1; i <= num; i++) {
		result += i;
	}
	printf("total num sum = %d", result);
}

void	numNumSum(int a, int b) {
	int	i;
	int	result;

	result = 0;
	for (i = a; i <= b; i++)
		result += i;
	printf("%d to %d sum = %d", a, b, result);
}

void	numAverage(int a, int b) {
	printf("%d and %d average is %d", a, b, (a + b) / 2);
}

void	factorial(int num) {
	int	i;
	int	result;

	result = 1;
	for (i = 1; i <= num; i++)
		result *= i;
	printf("%d! = %d", num, result);
}