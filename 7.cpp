#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	++* p;
	//taghadom amalgar * az ++ bishtar ast yani ++(*P) ejra mishavad
	p += 2;
	printf("%d", *p);
	return 0;
}
//output:3