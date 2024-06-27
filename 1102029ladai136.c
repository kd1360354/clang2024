#include<stdio.h>
int add(int a, int b);
main()
{
	int a, b, k;
	printf("2‚Â‚Ì®”?");
	scanf("%d%d", &a, &b);
	k = add(a, b);
	printf("max=%d",k);
}
int add(int a, int b) {
	int ans;
	if (a>b) {
		return(a);
	}
	else {
		return(b);
	}
}