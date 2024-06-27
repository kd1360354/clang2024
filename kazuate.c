#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int ant, num, cut;
	srand(time(0));
	rand();
	ant = rand() % 100 + 1;
	printf("”‚ ‚ÄƒQ[ƒ€\n");
	printf("1`100‚ð”­‚È‚­“–‚Ä‚é‚¾‚¯\n\n");
	cut = 0;
	while (1)
	{
		printf("”‚ð“ü—Í");
		scanf("%d",& num);
		cut++;
		if (ant > num) {
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n",num);
		}
		else if (ant< num) {
		printf	("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n", num);
		}
		else {
			printf("‚ ‚½‚èI%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½II\n", cut);
			break;
		}
	}
}