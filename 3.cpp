#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 200
int arr[MAX_SIZE]= {0};
//we want to create a linklist
typedef struct alfa * alfaptr;

struct alfa {//we have a struct(alfa) have one data of long long int and one pointer
	long long int x;
	alfaptr next;
};
alfaptr rear = NULL, front = NULL;//add new node
void push(int x) { //this function push new node to our linklist
	alfaptr node;//we have a pointer that save the address of new node in it
	node = (alfaptr)malloc(sizeof(struct alfa));//get memory for new node
	node->x = x;
	if (!front) { //if the new node is the first node of linklist
		front = node;
		rear=node;
	} else {
		rear->next = node;
		rear = node;//the rear pointer should point to the new node
		rear->next=NULL;
	}
}

void pop() { //remove the first node
	alfaptr node,ptr=front;
	if (!front)//the linklist is empty
		printf("ERROR1");
	if(front->next==NULL) {
		free(front);
		front=NULL;
		rear=NULL;
		return;
	} else {
		node = front->next;
		front = node;
		free(ptr);
	}
}
void search(int x) { //search one data in our list while find one data that not equal to this data
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
}

void rpop() {//pop last element(remove the node from the last of the linklist)
	alfaptr node = front;
	if(front->next==NULL) {
		free(front);
		front=NULL;
		rear=NULL;
		return;
	}
	while (node->next->next!=NULL)
		node = node->next;
	free(rear);
	rear = node;
	node->next=NULL;
}

void set() {
	alfaptr node = front;
	for (int i = 0; i < MAX_SIZE && node; i++, node = node->next)
		arr[i] = node->x;
}

int size() { //this function count the nodes and return the number of nodes
	alfaptr node = front;
	int count=0;
	if(front==NULL)
		return count;
	while (node!=NULL) {
		count++;
		node = node->next;
	}
	return count;
}

void show() {//show the all member of arr if the linklist is not empty
	if (!front)
		printf("ERROR3");
	else {
		for (int i = 0; i < MAX_SIZE; i++)
			printf("%d ", arr[i]);
	}
}

int average() {//this function measure the average number and return it

	alfaptr node = front;
	int sum = 0, count=0;
	if(front==NULL)//default average
		return 0;
	while (node) {
		sum += node->x;
		count++;
		node = node->next;
	}
	return sum / count;
}

int main() {
	int cmd;
	long long int x;
	while (true) {
		scanf("%d", &cmd);
		switch (cmd) {
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
			case 9:
				printf("%d", average());
			case 10:
				exit(0);
		}
	}
	return 0;
}