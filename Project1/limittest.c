#include <stdio.h>

int	main(void) {
	int	num;

	scanf("%d", &num);

	switch(num){
	case 'a' :
		printf("1");
		break;
	case 'b' :
		printf("2");
		break;
	case 'c' :
		printf("3");
		break;
	default :
		printf("good");
	}
}
