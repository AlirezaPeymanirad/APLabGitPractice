#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
#define MAX_SIZE 200
long long int arr[MAX_SIZE];

typedef struct alfa* alfaptr;

struct alfa {
	long long x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;
void push(long long int x)//add node to end of out=r linkedlist
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
}

void pop()
{
	alfaptr node;
	if (!front)
		printf("ERROR1");
	else
	{
	
		node = front->next;
		front = node;
		
	}
}
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	if (node == NULL)
	{
		printf("ERROR2");
		return;
	}
	while (node) {
		if (node->x == x)
			counter++;
		node = node->next;
	}
	printf("%d", counter);
}

void rpop() {//pop last element
	alfaptr node = front;
	while (node->next->next)
		node = node->next;
	free(rear);
	node->next = NULL;
	rear = node;
}

void set()
{
	alfaptr node = front;
	int i = 0;
	for (; i < MAX_SIZE && node; i++, node = node->next)
		arr[i] = node->x;
	arr[i] = '\0';
}

int size()
{
	alfaptr node = front;
	int count=0;
	while (node) {
		count++; node = node->next;
	}
	return count;
}

void show()
{
	if (front) {
		for (int i = 0; arr[i]!='\0'; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("ERROR3");
	}
	printf("\n");
}

float average()
{

	alfaptr node = front;
	long long int sum = 0, count=0;
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}

void main()
{
	int cmd;
	long long int x;
	while (true)
	{
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
		case 10:
			exit(0);
		}
	}
}