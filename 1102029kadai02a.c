#include<stdio.h>
main()
{
	double i,k;
	printf("2�̎����l");
	scanf("%lf %lf", &i, &k);
	printf("***%lf��%lf�̎l�����Z***\n",i,k);
	printf("�a=%2f", i + k);
	printf("��=%2f", i - k);
	printf("��=%2f", i * k);
	printf("��=%2f", i / k);
}