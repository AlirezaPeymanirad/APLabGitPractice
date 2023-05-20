#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE];

typedef struct alfa * alfaptr;
typedef struct alfa* alfaptr;

struct alfa {
	long long x;
	alfaptr next;
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
    alfaptr node;
    node = (alfaptr)malloc(sizeof(struct alfa));
    node->next = NULL;
    node->x = x;
    if (!front) {
        front = node;
        rear = front;
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

    if (!front)
        printf("ERROR1");
    else
    {
        alfaptr temp = front->next;
        delete front;
        front = temp;

    }
}
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	while (node)
		if (node->x == x)
			printf("%d", counter);
		else {
			printf("ERROR2");
			break;
		}
		node = node->next;
    alfaptr node = front;
    int counter = 0;
    while (node) {
        if (node->x == x)
            printf("%d", counter);
        else {
            printf("ERROR2");
            break;
        }
        node = node->next;
    }
}

void rpop() {//pop last element
	alfaptr node = front;
	while (node)
		node = node->next;
	free(rear);
	rear = node;
    alfaptr node = front;

    if (front) {
        while (node->next && node->next->next)
            node = node->next;
    }
    else {
        return;
    }
    if (node == front&& node->next==NULL) {
        rear = NULL;
        front = NULL;
    }
    else {
        free(rear);
        node->next = NULL;
        rear = node;
    }
}

void set()
{
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
		arr[i] = node->x;
    alfaptr node = front;
    for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
        arr[i] = node->x;
}

int size()
{
	alfaptr node = front;
	int count;
	while (node)
		count++;node = node->next;
	return count;
    alfaptr node = front;
    int count=0;
    while (node) {
        count++;
        node = node->next;
    }
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
		printf("ERROR3");
	}
    //if (front) {
    //	alfaptr temp = front;
    //	while (temp) {
    //		printf("%d\n", temp->x);
    //		temp = temp->next;
    //
    //	}
    //}
    //return;
    //or ---------------------(there can be bugs  in some situations in this)
    if (front) {
        for (int i = 0; i < size(); i++)
            printf("%d ", arr[i]);
    }
    else
    {
        printf("ERROR3");
    }
}

int average()
float average()
{

	alfaptr node = front;
	int sum = 0, count;
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
    alfaptr node = front;
    int sum = 0, count=0;
    while (node) {
        sum += node->x;
        count++;
        node = node->next;
    }
    return sum * 1.0 / count;
}

void main()
int main()
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
    int cmd;
    long long int x;
    while (true)
    {
        scanf_s("%d", &cmd);
        switch (cmd)
        {
            case 1://push
                scanf_s("%lld", &x);
                push(x);
                break;
            case 2://pop
                pop();
                break;
            case 3://rpop
                rpop();
                break;
            case 4://search
                scanf_s("%lld", &x);
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
            case 8:
                printf("%f", average());
            case 10:
                exit(0);
        }
    }
}
