#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 }, c[10];
	int i = 0;
	printf("配列aと配列bを交換すると\n");

	c[i] = a[i];
	a[i] = b[i];
	b[i] = c[i];
	for (i = 0; i < 10; i++) {
	printf("配列a=%d", a[i]);
	printf("配列b=%d", b[i]);
}
	printf("\n");
}