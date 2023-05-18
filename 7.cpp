#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	++* p;
	p += 2;
	printf("%d", *p);
	return 0;
}//it prints 3
//at the first p pointed to arr[0] and changed it to 2 then it pointed to arr[2]