#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200

int arr[MAX_SIZE];
int count; 

typedef struct alfa* alfaptr;

struct alfa {
    long long x;
    alfaptr next;
};
alfaptr rear = NULL, front = NULL;

void push(long long int x)
{
    alfaptr node;
    node = (alfaptr)malloc(sizeof(struct alfa));
    node->x = x;
    node->next = NULL;  
    if (!front) {
        front = node;
        rear = node;
    }
    else {
        rear->next = node;
        rear = node;
    }
    count++;    
}

void pop()
{
    alfaptr node;
    if (!front)
        printf("ERROR1");
    else
    {
        node = front;
        front = node->next;
        free(node);
        count--;    
    }
}

void search(long long int x)
{
    alfaptr node = front;
    int counter = 0;
    while (node) {
        if (node->x == x) {
            printf("%d", counter);
            return;
        }
        node = node->next;
        counter++;
    }
    printf("ERROR2");
}

void rpop() {//pop last element
    alfaptr node = front;
    while (node->next != rear) {
        node = node->next;
    }
    free(rear);
    rear = node;
    rear->next = NULL;  
    count--;    
}

void set()
{
    alfaptr node = front;
    for (int i = 0; i < count && node; i++, node = node->next)  // iterate up to count rather than MAX_SIZE
        arr[i] = node->x;
}

int size()
{
    return count;   
}

void show()
{
    if (!front) {
        for (int i = 0; i < MAX_SIZE; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        alfaptr node = front;
        while (node) {
            printf("%lld ", node->x);
            node = node->next;
        }
    }
}

int average()
{
    alfaptr node = front;
    int sum = 0;
    while (node) {
        sum += node->x;
        node = node->next;
    }
    return sum / count;
}

int main()
{
    int cmd;
    long long int x;
    while (1)    
    {
        printf("Enter a command: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 1://push
            scanf("%lld", &x);
            push(x);
            break;
        case 2://pop
            pop();
            break;
        case 3://rpop
            rpop();
            break;
        case 4://search
            scanf("%lld", &x);
            search(x);
            break;
        case 5://set
            set();
            break;
        case 6://show
            show();
            break;
        case 7://size
            printf("%d", size());
            break;
        case 8://average
            printf("%d", average());
            break;
        case 10:
            exit(0);
        default:
            printf("Invalid command
"); 
