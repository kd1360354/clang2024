#include<stdio.h>
main()
{
	char i,a;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	for (i=a+1; i <= 0x7a; i++) {
		printf("%c ",i);
	}
}