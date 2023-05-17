#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	++*p; // 1++ -> 2 (first arr element)
	p += 2; // go to index 2
	printf("%d", *p); // print 3
	return 0;
}