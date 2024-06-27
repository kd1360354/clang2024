#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","satuhday" };
	int i;
	for (i =0 ; i < 2; i++) {
		if (day[i] == "s") {
			printf("%s\n", day[i]);
		}
	}
}