#include<stdio.h>
void irekae(int*ap, int *bp);
main()
{
	int a = 10, b = 20;
	printf("�֐����s�O�̒l:\n");
	printf("a=%d b=%d\n", a, b);
	irekae(&a,&b);
	printf("�֐����s��̒l:\n");
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