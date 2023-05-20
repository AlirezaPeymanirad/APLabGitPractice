#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr1 = arr;//10
    int* ptr2 = arr + 5;//60
    printf("%d\n", (*ptr2 - *ptr1));//50
    printf("%c", (char)(*ptr2 - *ptr1));//2
    return 0;
}