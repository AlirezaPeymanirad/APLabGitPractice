#include<stdio.h>
int main()
{
	int a;
	unsigned char *x;
	x = (unsigned char *)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	return 0;
}

//513
