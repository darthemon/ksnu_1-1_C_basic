#include <stdio.h>
#include <stdlib.h>

void	sizeOfChar(void) {
	char	str;
	int		num;
	long	l;

	printf("char size : %d\n", sizeof(char));
	printf("str size : %d\n", sizeof(str));
	printf("\nint size : %d\n", sizeof(int));
	printf("num size : %d\n", sizeof(num));
	printf("\nlong size : %d\n", sizeof(long));
	printf("l size : %d\n", sizeof(l));
}

void	asciiTest(void) {
	char	ch;
	for (ch = 'A'; ch <= 'Z'; ch++)
		printf("%c : %d\n", ch, ch);
}

void	printAscii(void) {
	char	c;

	c = 'A';
	while (c != 'z')
	{
		printf("%c", c);
		c++;
	}
}

void	sizeHardTest(void)
{
	char*	c;

	//c = malloc(100);
	c = "                                                        \0";
	printf("c size : %d\n", sizeof(c));
}