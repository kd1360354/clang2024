#include<stdio.h>
struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit momo, kakaku, osusume, kosuu , kinngaku;
	strcpy(momo.name, "peach");
	kakaku.price = 300;
	osusume.point = 5;
	kosuu.number = 3;
	kinngaku.total = 0;
	printf("¤•i–¼:%5s\n", momo.name);
	printf("‰¿Ši:%5d‰~\n", kakaku.price);
	printf("‚¨‘E‚ß“x:ššššš\n", osusume.point);
	printf("ŒÂ”:%5dŒÂ\n", kosuu.number);
	printf("‹àŠz:\\%5d-\n", kakaku.price * kosuu.number);
}