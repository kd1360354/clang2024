#include<stdio.h>
main()
{
	char data1[]="abcde", data2[80];
	int i=0;
	printf("(コピー元)配列data1[]=");
	while (data1[i]!='\0')
	{
		printf("%c", data1[i]);
		i++;
	}
	i = 0;
	while (data2[i] = data1[i])
	{
		i++;
	}
	printf("(コピー先)配列data2[]=");
	i = 0;
	while (data2[i] != '\0')
	{
		printf("%c", data2[i]);
		i++;
	}
}