#include<stdio.h>
main()
{
	int i, gokei, sum;
		gokei = 0;
		printf("�����i-999�ŏI���j?");
	scanf("%d", &i);
	while (i!=-999)
	{
		gokei += i;
		printf("�����i-999�ŏI���j�H");
		scanf("%d", &i);
	}
	printf("���v��%d\n", gokei);
	printf("����=%f\n", gokei);
}