#include<stdio.h>
main()
{
	char ch;
	printf("1文字入力？");
	scanf("%c", &ch);
	if (ch>='a'&&ch<='z') {
		printf("その文字は「小文字です」");

	}
	else {
		printf("ERROR");
	}
}	