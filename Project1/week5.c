#include <stdio.h>
//#include <io.h>
#include <string.h>

void	paramTest(void) {
	printf("%s, %s, %s\n", "luke", "skywalker", "star wars");
}

void	justifyPrint(void) {
	printf("%-8s, %14s, %5s\n", "luke", "skywalker", "star wars");
	printf("%-8s, %-14s, %5s./a\n", "ham", "ster", "superham");
}

void	scanfTest(void) {
	int	num1;
	int	num2;
	int	num3;

	printf("3 integers: ");
	scanf("%d %o %x", &num1, &num2, &num3);
	printf("print integers as decimal :");
	printf("%d %d %d\n", num1, num2, num3);
}

void	whileBasic(void) {
	int	i;

	i = 0;
	while (i++ != 5)
		printf("Hello World!\n");
}

void	whilePower(void) {
	int	num;
	int	i;

	i = 0;
	printf("any integer: ");
	scanf("%d",  &num);
	while (i++ != 10)
		printf("%d\n", i * num);
}

void	gugudan(void) {
	int	num[] = { 1, 1 };

	while(num[0]++ < 10){
		while (num[1] < 10)
			printf("%d\n", num[0] * num[1]++);
		num[1] = 1;
		printf("\n");
	}
}

void	gugudan_v2(void) {
	int	num[] = { 1, 1 };

	while (num[0]++ < 9) {
		while (num[1] < 10)
			printf("%d ", num[0] * num[1]++);
		num[1] = 1;
		printf("\n");
	}
}

void	gugudan_v3(void) {
	int	num[] = { 1, 1 };

	while (num[0]++ < 10) {
		while (num[1] < 9)
			printf("%d x %d = %d\t", num[0], num[1], (num[0] * num[1]++));
		num[1] = 1;
		printf("\n");
	}
}

void	dogudan(void) {
	int	num[] = { 1, 1 };

	do {
		num[1] = 1;
		do {
			printf("%d x %d = %d\t", num[0], num[1], (num[0] * num[1]++));
		} while (num[1] < 9);
		printf("\n");
	}while (num[0]++ < 10);
}

void	homework(void) {
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (i <= 50) {
		result += (i * 2 - 1);
		i++;
	}
	printf("result = %d", result);
}