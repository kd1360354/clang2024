#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int ant, num, cut;
	srand(time(0));
	rand();
	ant = rand() % 100 + 1;
	printf("�����ăQ�[��\n");
	printf("1�`100�𐔏��Ȃ����Ă邾��\n\n");
	cut = 0;
	while (1)
	{
		printf("�������");
		scanf("%d",& num);
		cut++;
		if (ant > num) {
			printf("%d���傫���ł�\n\n",num);
		}
		else if (ant< num) {
		printf	("%d��菬�����ł�\n\n", num);
		}
		else {
			printf("������I%d��œ�����܂����I�I\n", cut);
			break;
		}
	}
}