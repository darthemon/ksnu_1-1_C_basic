#include <stdio.h>

int	main(void) {
	int	i;				//변수 선언
	int	j;
	int	x;
	int	y;
	int	num;

	printf("num = ");			//num 입력
	scanf("%d", &num);
	i = 0;					//변수에 값 할당
	x = 0;
	y = 1;
	while(i < num) {			//외부 반복문
		j = 0;
		while(j < num / 2 - x){		//*이 출력될 자리 전까지 공백 출력
			printf("  ");
			j++;
		}
		while(j < num / 2 + y){		//*이 출력될 범위 동안 * 출력
			if(i % 2 == 0)		//중앙 정렬을 위해
				printf("* ");	//출력될 * 개수에 따라 공백 조절
			else
				printf(" *");
			j++;
		}
		while(j < num){			//*이 출력된 이후 남은 공백 출력
			printf("  ");
			j++;
		}
		if(i % 2 == 0)			//중심 기준으로 양 옆으로 한칸씩
			x++;			//증가하는 변수 x, y
		else
			y++;
		i++;
		printf("\n");
	}
	return(0);
}

