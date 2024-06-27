#include<stdio.h>
main()
{
	char str[] = "abcde";
	int i;
	i = 0;
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
}