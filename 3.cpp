#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];
#pragma warning (disable:4996)

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
	if (!front) {
		front = rear = node;
	}
	else {
		rear->next = node;
		rear = node;
	}
}

void pop()
{
	alfaptr node;
	if (front==rear->next)
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
	while (node!=rear->next) {
		if (node->x == x) {
			counter++;
		}
		node = node->next;
	}
	if (counter) {
		printf("%d\n", counter);
	}
	else
		printf("ERROR2\n%d not exit in list", x);
}

void rpop() {//pop last element
	alfaptr node = front;
	if(front==nullptr)printf("ERROR2");
	else {
		while (true) {
			if (node->next == rear)break;
			if (node == rear) {
				front = nullptr;
				break;
			}
			node = node->next;
		}
		free(rear);
		rear = node;
	}
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node!=rear->next; i++, node = node->next)
		arr[i] = node->x;
}

int size()
{
	alfaptr node = front;
	int count = 1;
	while (true) {
		count++;
		node = node->next;
		if (node == rear)break;
	}
	return count;
}

void show()
{
	if (front) {
		alfaptr node = front;
		for (int i = 0; i < MAX_SIZE; i++) {
			printf("%d ", arr[i]);
			if (node == rear)break;
			node = node->next;
		}
		printf("\n");
	}
	else
	{
		printf("ERROR3");
	}
}

float average()
{

	alfaptr node = front;
	int sum = 0;
	int count = size();
	while (node!=rear->next) {
		sum += node->x;
		node = node->next;
	}
	return (float)sum / count;
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
			printf("%d\n", size());
			break;
		case 8:
			printf("%f\n", average());
		case 9:
			exit(0);
		}
	}
}