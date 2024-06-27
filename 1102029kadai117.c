#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wedesday","thursday","friday","saturday" };
	int i;
	for (i = 0; i < 7; i++) {
		printf("%s\n", day[i]);
	}
}