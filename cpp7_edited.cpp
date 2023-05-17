#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = arr;
	++* p;
	p += 2;
	printf("%d", *p);
	return 0;
	//ebteda p be meghdar arr[0] eshare mikonad sepas meghjdar arr[0] barabar 2 mishavad sepas p do khane miravad jelo pas khane 3 arr chap mishavad 
}