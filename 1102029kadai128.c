#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int i;
	int* p_a;
		int* p_b;
	p_a = a;
	p_b = b;
	printf("---���s�O---\n�z��a[]=");
	for (i = 0; i < 10; i++) {
		printf("% d", a[i]);
	}
	printf("\n");
	printf("�z��b[]=");
	for (i = 0; i < 10; i++) {
		printf("% d", b[i] );
	}
	printf("\n---���s��---\n�z��a[]=");
	for (i = 0; i < 10; i++) {
		printf("% d",b[i]);
	}
	printf("\n");
	printf("�z��b[]=");
	for (i = 0; i < 10; i++) {
		printf("% d", a[i]);
	}
}