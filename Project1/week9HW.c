#include <stdio.h>

void	tamperature() {
	int	val;

	printf("온도 변환\nC > F\n");
	scanf("%d", &val);
	printf("\n[%d]\n", ((val * 18 / 10) + 32));
}

void	length(){
	double	val;

	printf("길이 변환\nm > ft\n");
	scanf("%lf", &val);
	printf("\n[%lf]\n", (val * 3.28084));
}

void	weight(){
	double	val;

	printf("무게 변환\nkg > lb\n");
	scanf("%lf", &val);
	printf("\n[%lf]\n", (val * 2.20462));
}

void	size(){
	double	val;
	
	printf("넓이 변환\nm^2 > ft^2\n");
	scanf("%lf", &val);
	printf("\n[%lf]\n", (val * 10.7639));
}

int	main(void) {
	int	opt;

	printf("|1.\t온도 변환\t|\n|2.\t길이 변환\t|\n|3.\t무게 변환\t|\n|4.\t넓이 변환\t|\n");
	scanf("%d", &opt);
	switch(opt) {
	case 1 :
		tamperature();
		break;
	case 2 :
		length();
		break;
	case 3 :
		weight();
		break;
	case 4 :
		size();
		break;
	default :
		printf("input error\n");
		break;
	}
	return(0);
}
