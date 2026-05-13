#include <stdio.h>
#include <stdlib.h>

int	fibonacci(int num){
	
	if(num == 0)
		return(0);
	else if(num == 1)
		return(1);
	num = fibonacci(num - 2) + fibonacci(num - 1);
	return(num);
}

int	main(int argc, char *argv[]){
	int	num;
	int	*arr;
	int	i;

	num = atoi(argv[1]);
	arr = (int *)malloc(sizeof(int) * num);
	i = 0;
	while(i <= num) {
		arr[i] = fibonacci(num - (num - i));
		i++;

	}
	i = 0;
	printf("=====Fibonacci %d=====\n", num);
	while(i <= num){
		printf("[%d] ", arr[i]);
		i++;
	}
	free(arr);
}
