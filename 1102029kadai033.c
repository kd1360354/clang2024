#include<stdio.h>
main()
{
	char ch;
	printf("アルファベット？");
	scanf("%c", &ch);
	if (ch>='a'&&ch<='z') {
		printf("その文字は「小文字です」");

	}
	else {
		printf("その文字は「大文字です」");
	}
}