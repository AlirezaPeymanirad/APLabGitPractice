#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float* ptr1 = &arr[0];
    float* ptr2 = ptr1 + 3;
    printf("%f", *ptr2 - *ptr1);
    return 0;
    //ptr 1 is 12.5 and ptr2 is 90.5 and then subtract these two numbers and show 78.000000
}