#include<stdio.h>
main()
{
	char data1[15] = "mikan";
	char data2[15];
	char* p_data1, * p_data2;

	p_data1 = data1;
	p_data2 = data2;
	while (*p_data2++ = *p_data1++);
	p_data2 = data2;
	printf("ƒRƒs[æ‚Ì•¶š—ñ=%s\n", p_data2);
}