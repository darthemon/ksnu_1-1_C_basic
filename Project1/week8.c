#include <stdio.h>

void	continued(void) {
	int	num;

	printf("start");
	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0) {
			continue;
		}
		printf("%d ", num);
	}
	printf("end");
}

void	breaked(void) {
	int	i;
	
	i = 0;
	while (1)
		if (i++ > 5)break;
}

void	findNum(void) {
	int	a;
	int	b;

	a = 0;
	while(a < 10) {
		b = a;
		while(b < 10) {
			if ((a * 10 + b) + (b * 10 + a) == 99) {
				printf("%d + %d = 99\n",a * 10 + b, b * 10 + a);
			}
			b++;
		}
		a++;
	}
}

void	reverseNum(void) {
	int	num;
	int	result;

	scanf("%d", &num);
	result = 0;
	while (1) {
		if (num < 10) break;
		result += num % 10;
		num /= 10;
		result *= 10;
	}
	result += num;
	printf("-> %d\n", result);
}