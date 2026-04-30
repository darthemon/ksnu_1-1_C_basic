#include <stdio.h>

double	calc(double num1, char op, double num2){
	if(op == '+')
		return num1 + num2;
	else if (op == '-')
		return num1 - num2;
	else if (op == '*')
		return num1 * num2;
	else if (op == '/')
		return num1 / num2;
}

void	cCalc(void) {
	int		op;
	double	num1, num2;
	double	result;

	printf("1 - 덧셈\n2 - 뺄셈\n3 - 곱셈\n4 - 나눗셈\n옵션을 선택하세요: ");
	scanf("%d", &op);
	printf("두 실수 입력 : ");
	scanf("%lf %lf", &num1, &num2);

	if(op == 1)
		result = num1 + num2;
	else if (op == 2)
		result = num1 - num2;
	else if (op == 3)
		result = num1 * num2;
	else if (op == 4)
		result = num1 / num2;
	printf("결과 : %lf\n", result);
}

void	ifCalc(void){
	int	num1;
	int	num2;

	printf("input 2 integers: ");
	scanf("%d %d", &num1, &num2);
	printf("result = ");
	if(num1 > num2)
		printf("%d\n", num1 - num2);
	else
		printf("%d\n", num2 - num1);
}

void	triCalc(void) {
	int	num1;
	int	num2;

	printf("input 2 integers: ");
	scanf("%d %d", &num1, &num2);
	printf("result = ");
	printf("%d\n", num1 > num2 ? num1 - num2 : num2 - num1);
}
