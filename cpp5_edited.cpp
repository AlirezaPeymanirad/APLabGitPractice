#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int* ptr1 = arr;
    int* ptr2 = arr + 5;
    printf("%d\n", (*ptr2 - *ptr1));
    printf("%c", (char)(*ptr2 - *ptr1));
    return 0;
    //ebteda megdar ptr1 barabar 10 mishavad sepas baraye ptr2 pointer arr 5 ta jelo miravad va barabr 60 mishavad sepas in do meghdar kam mishavad sepas code asci 50 ke barabar add 2 ast chap mishavad
}