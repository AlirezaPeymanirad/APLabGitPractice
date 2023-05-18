#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr1 = arr;
    //*ptr1=10
    int* ptr2 = arr + 5;
    //*ptr2=60
    printf("%d\n", (*ptr2 - *ptr1));
    //60-10
    printf("%c", (char)(*ptr2 - *ptr1));
    //asci code 2 id 50
    return 0;
}
//50
//2