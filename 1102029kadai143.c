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
	printf("���i��:%5s\n", momo.name);
	printf("���i:%5d�~\n", kakaku.price);
	printf("���E�ߓx:����������\n", osusume.point);
	printf("��:%5d��\n", kosuu.number);
	printf("���z:\\%5d-\n", kakaku.price * kosuu.number);
}