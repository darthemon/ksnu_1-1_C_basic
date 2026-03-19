#include <stdio.h>

void	TwoF() {
	int	num1;
	int	num2;
	int	num3;
	int	num4;

	num3 = 30;
	num4 = 40;

	//printf("num1: %d, num2: %d\n", num1, num2);
	num1 = 10;
	num2 = 20;

	printf("num1: %d, num2: %d\n", num1, num2);
	printf("num3: %d, num4: %d\n", num3, num4);
	return;
}

void	TwoS() {
	int	num1;
	int	num2;
	int	result;

	num1 = 3;
	num2 = 4;
	result = num1 + num2;

	printf("sum result: %d\n", result);
	printf("%d + %d = %d\n", num1, num2, result);
	printf("%d + %d is %d.\n", num1, num2, result);
	return;
}

void	TwoM() {
	int	num1;
	int	num2;
	int	result;
	num1 = 3;
	num2 = 4;
	result = num1 * num2;
	printf("product result: %d\n", result);
	printf("%d * %d = %d\n", num1, num2, result);
	printf("%d multiplied by %d is %d.\n", num1, num2, result);
	return;
}

void	TwoD() {
	int	num1;
	int	num2;
	int	result;
	num1 = 10;
	num2 = 5;
	result = num1 / num2;
	printf("division result: %d\n", result);
	printf("%d / %d = %d\n", num1, num2, result);
	printf("%d divided by %d is %d.\n", num1, num2, result);
	return;
}
