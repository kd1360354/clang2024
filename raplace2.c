#include<stdio.h>
main()
{
	int a, b, w;
	a = 5;
	b = 3;
	printf("入れ替え前:a=%d,b=%d\n", a, b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("入れ替え後:a=%d,b=%d\n", a, b);
}