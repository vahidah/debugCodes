#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define MAX_SIZE 200
int arr[MAX_SIZE];

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
		alfaptr temp = front;
		front = node;
		free(temp);
	}
}
void search(int x)
{
	alfaptr node = front;
	int counter = 0;
	while (node)
		if (node->x == x) {
			printf("%d", counter);
			counter++;
			node = node->next;
		}
		else {
			printf("ERROR2");
			counter++;
			node = node->next;
			//break;
		}
	//node = node->next;
}

void rpop() {//pop last element
	alfaptr node = front;
	//while (node)
	//	node = node->next;
	// if(rear!=NULL)
	//free(rear);                                 
	//rear = node;
	if (front == NULL) {
		printf("ERROR4");
		return;
	}
	if (front != rear) {
		while (node->next != rear)
			node = node->next;
		free(rear);
		rear = node;
		rear->next = NULL;
	}
	else {
		free(rear);
		front = rear = NULL;
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
	int count = 0;
	while (node) {
		count++; node = node->next;
	}
	return count;
}

void show()
{
	if (front) {
		for (int i = 0; i < MAX_SIZE; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		printf("ERROR3");
	}
}

int average()
{

	alfaptr node = front;
	int sum = 0, count = 0;
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
	/*long long*/ int x;
	while (true)
	{
		scanf("%d", &cmd);
		switch (cmd)
		{
		case 1://push
			scanf("%d", &x);
			push(x);
			break;
		case 2://pop
			pop();
			break;
		case 3://rpop
			rpop();
			break;
		case 4://search
			scanf("%d", &x);
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