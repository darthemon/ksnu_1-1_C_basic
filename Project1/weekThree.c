#include <stdio.h>

void	printBase(void) {
	int	num1 = 0xA7;
	int	num2 = 0x43;
	int	num3 = 032;
	int	num4 = 024;

	printf("0xa7의 10진수 정수 값 : %d\n", num1);
	printf("0x43의 10진수 정수 값 : %d\n", num2);
	printf("032의 10진수 정수 값 : %d\n", num3);
	printf("024의 10진수 정수 값 : %d\n", num4);

	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d + %d = %d\n", num3, num4, num3 * num4);
}

void	loopTest(void) {
	int		i;
	float	num = 0.0;

	for(i = 0; i < 100; i++)
		num += 0.1;

	printf("num = %f\n", num);
}
void	loopDoubleTest(void) {
	int		i;
	double	num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;

	printf("num = %f\n", num);
}

void	bitTest(void) {
	int	num;
	int	result1;
	int	result2;
	int	result3;

	num = 15;
	result1 = num << 1;
	result2 = num << 2;
	result3 = num << 3;

	printf("num << 1 = %d\n", result1);
	printf("num << 2 = %d\n", result2);
	printf("num << 3 = %d\n", result3);
}