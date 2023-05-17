#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 }; // 5
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));
    printf("%c", (char)(*ptr2 - *ptr1));
    return 0;
}
// print (60 - 10) and character ('2')