#include<stdio.h>
struct kose
{
	char kosu[20];
	char kyooka[20];
	int tanni;
};
main()
{
	struct kose kosumei, honn, tannni;
	strcpy(kosumei.kosu,"ゲームソフトⅠコース");
	strcpy(honn. kyooka, "C言語");
	tannni. tanni = 8;
	printf("コース名:%s\n", kosumei.kosu);
	printf("教科名:%s\n", honn.kyooka);
	printf("単位数:%d\n", tannni.tanni);
}