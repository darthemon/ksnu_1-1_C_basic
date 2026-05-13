#include <stdio.h>

int	fibonacci(int num){
	
	if(num == 0)
		return(0);
	else if(num == 1)
		return(1);
	num = fibonacci(num - 2) + fibonacci(num - 1);
	return(num);
}

int	main(void){
	int	num;;

	scanf("%d", &num);
	num = fibonacci(num);
	printf("num = %d\n", num);
}
