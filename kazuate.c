#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int ant, num, cut;
	srand(time(0));
	rand();
	ant = rand() % 100 + 1;
	printf("数あてゲーム\n");
	printf("1〜100を数少なく当てるだけ\n\n");
	cut = 0;
	while (1)
	{
		printf("数を入力");
		scanf("%d",& num);
		cut++;
		if (ant > num) {
			printf("%dより大きいです\n\n",num);
		}
		else if (ant< num) {
		printf	("%dより小さいです\n\n", num);
		}
		else {
			printf("あたり！%d回で当たりました！！\n", cut);
			break;
		}
	}
}