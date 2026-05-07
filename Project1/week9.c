#include <stdio.h>

void	swm(void) {
	int	num;

	printf("1 ~ 5 num : ");
	scanf("%d", &num);
	switch (num) {
	case 1 :
		printf("1 = one\n");
		break;
	case 2:
		printf("2 = two\n");
		break;
	case 3:
		printf("3 = three\n");
		break;
	case 4:
		printf("4 = four\n");
		break;
	case 5:
		printf("5 = five\n");
		break;
	default :
		printf("nope\n");
	}
}

/*void	switchCaseLimitTest(void) {
	int	num;

	scanf("%d", &num);
	switch (num) {
	case (num >= 0 && num <= 10):
		printf("0 ~ 10\n");
		break;
	case (num >= 11 && num <= 30):
		printf("11 ~ 30\n");
		break;
	default :
		printf("up from 31\n");
		break;
}*/

/*void	gototest(void) {
	int	num;
	scanf("%d", &num);
	if (num == 1) goto one;
	else if (num == 2) goto two;
	else if (num == 3) goto three;
	else goto nope;

one:
	printf("one\n");
	return;

}*/