#include<stdio.h>
void irekae(int*ap, int *bp);
main()
{
	int a = 10, b = 20;
	printf("関数実行前の値:\n");
	printf("a=%d b=%d\n", a, b);
	irekae(&a,&b);
	printf("関数実行後の値:\n");
	printf("a=%d b=%d\n", a, b);
}
void irekae(int *ap, int*bp)
{
	int w;
	w = *ap;
	*ap = *bp;
	*bp = w;
	return;
}