#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr;
    // printf("%d\n",*ptr1);
    int *ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));
    printf("%c", (char)(*ptr2 - *ptr1));
    // Output = 50
    //Output = 2
    return 0;
}