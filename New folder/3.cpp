#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];
#pragma warning(disable:4996)
typedef struct alfa* alfaptr;

struct alfa {
	long long x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;
void push(int x)
{
	alfaptr node;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	if (!front)
		front = node;
	else {
		rear->next = node;
		rear = node;
	}
}

void pop(){
	if (!front)
		printf("ERROR1");
	else
	{
		alfaptr node = front->next;
		front = node;
		free(node);//فضا را ازاد نکرده بود
	}
}
void search(int x)
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
	printf("error");
}

void rpop() {//i change this function
	if (!front) {
		printf("error");
	}
	else if (front == rear) {
		free(front);
		front = NULL;
		rear = NULL;
	}
	else {
		alfaptr node = front;
		while (node->next != rear)
			node = node->next;
		free(rear);
		rear = node;
		rear->next = NULL;
	}
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
		arr[i] = node->x;
}

int size()
{
	alfaptr node = front;
	int count=0;
	while (node) {
		count++;
		node = node->next;
	}
	return count;
}

void show()
{//اگر صف خالی باشه ارایه به عنوان خروجی چاپ میشود
	if (front==NULL) {
			printf("error");
	}
	else
	{
		alfaptr node = front;
		while (node) {
			printf("%d", node->next);
			node = node->next;
		}
	}
}

int average()
{

	alfaptr node = front;
	int sum = 0, count=0;
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