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
alfaptr rear = nullptr, front = nullptr;
void push(int x)
{
	alfaptr node;
	node = (alfaptr)malloc(sizeof(struct alfa));
	node->x = x;
	node->next = nullptr;
	if (!front)
		front = rear = node;
	else
	{
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
		node = front;
		front = node->next;
		delete node;
	}
}
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	while (node)
	{
		if (node->x == x)
			printf("%d", counter++);
		else
		{
			printf("ERROR2");
		}
		node = node->next;
	}
}

void rpop()
{ // pop last element
	alfaptr node = front;
	alfaptr temp;
	while (node->next->next)
		node = node->next;
	temp = node->next;
	node->next = nullptr;
	delete temp;
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
	int count;
	while (node)
	{
		count++;
		node = node->next;
	}
	return count;
}

void show()
{
	if (!front)
	{
		printf("ERROR3");
	}
	else
	{
		for (int i = 0; i < size(); i++)
			printf("%d ", arr[i]);
	}
}

int average()
{

	alfaptr node = front;
	int sum = 0, count{};
	while (node)
	{
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}

int main()
{
	int cmd;
	long long int x;
	while (true)
	{
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
			printf("%d", size());
			break;
		case 10:
			exit(0);
		}
	}
	return 0;
}