#include<stdio.h>
main()
{
	int data[]={ 10,20,30,40,50,60,70,80,-999 };
	int* pd, i;
	pd = data;
	printf("�|�C���^�Œ�\��\n�z��data[]=");
	for (i = 0; *(pd + i) != -999; i++) {
		printf("%d ", *(pd + i));
	}
	printf("\n�|�C���^��ω������ĕ\��\n�z��data[]=");
	for (pd = data; *(pd) != -999; pd++) {
		printf("%d ", *pd);
		}
	
}