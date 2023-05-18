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
}
//00000001,00000001  are two bytes of a
//output:513