#include<stdio.h>
int main()
{
	int a;
	char* x;
	x = (char*)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
	//ebteda meghdar a barabar 512 mishavad sepas x[0] barabar code asci 1 mishavad sepas meghdar a 513 mishavad va chap mishavad
}