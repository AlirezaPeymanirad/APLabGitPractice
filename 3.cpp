#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

typedef struct alfa *alfaptr;

struct alfa
{
	long long x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;
void push(int x)
{
	alfaptr node;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	node->next = NULL;
	if (!front)
	{
		front = node;
		rear = node;
	}
	else
	{
		rear->next = node;
		rear = node;
	}
}

void pop()
{

	if (!front)
		printf("ERROR1\n");
	else
	{
		alfaptr node;
		node = front->next;
		free (front);
		front = node;
	}
}
void search(int x)
{
	alfaptr node = front;
	bool find = false;
	int counter = 1;
	while (node)
		if (node->x == x)
		{
			printf("%d\n", counter);
			find = true;
			break;
		}
		else
		{
			node = node->next;
			counter++;
		}

	if (!find)
		printf("ERROR2\n");
}

int size()
{
	alfaptr node = front;
	int count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return count;
}

void rpop()
{ // pop last element
	if (size() == 1)
	{
		pop();
		front = NULL;
		rear = NULL;
	}
	else if (front)
	{
		alfaptr node = front;
		while (node->next != rear)
			node = node->next;
		free(rear);
		node->next = NULL;
		rear = node;
	}
	else if (!front)
		printf("ERROR1");
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
		arr[i] = node->x;
}

void show()
{
	if (front)
	{
		for (int i = 0; i < size(); i++)
			printf("%d ", arr[i]);

		printf("\n");
	}
	else
	{
		printf("ERROR3\n");
	}
}

float average()
{

	alfaptr node = front;
	int sum = 0, count = 0;
	while (node)
	{
		sum += node->x;
		count++;
		node = node->next;
	}
	return (sum * 1.0) / (count * 1.0);
}

int main()
{
	int cmd;
	long long int x;
	while (true)
	{
		printf("enter\n");
		scanf("%d", &cmd);
		switch (cmd)
		{
		case 1: // push
			scanf("%lld", &x);
			push(x);
			break;
		case 2: // pop
			pop();
			break;
		case 3: // rpop
			rpop();
			break;
		case 4: // search
			scanf("%lld", &x);
			search(x);
			break;
		case 5: // set
			set();
			break;
		case 6: // show
			show();
			break;
		case 7: // size
			printf("%d\n", size());
			break;
		case 8:
			printf("%f", average());
		case 9:
			exit(0);
		}
	}
}
