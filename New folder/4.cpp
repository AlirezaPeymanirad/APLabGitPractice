#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float* ptr1 = &arr[0];//12.5
    float* ptr2 = ptr1 + 3;//90.5
    printf("%f", *ptr2 - *ptr1);//78.5
    return 0;
}