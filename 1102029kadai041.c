#include<stdio.h>
main()
{
	int i, gokei, sum;
		gokei = 0;
		printf("整数（-999で終了）?");
	scanf("%d", &i);
	while (i!=-999)
	{
		gokei += i;
		printf("整数（-999で終了）？");
		scanf("%d", &i);
	}
	printf("合計＝%d\n", gokei);
	printf("平均=%f\n", gokei);
}