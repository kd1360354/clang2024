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
	struct fruit  kudamono[3] = {{ "peach",300,5,3,0 },
	{ "grape",200,4,10,0 },
	{ "watermelon",1500,5,8,0 }};
	struct fruit* p = kudamono;
	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("���i��:%s\t",p->name);
		printf("���i%4d�~\t",p->price);
		printf("���E�ߓx%d\n",p->point);
		printf("��%4d��\t", p->number);
		printf("���z%4d-\n", p->price * p->number);

	}
}