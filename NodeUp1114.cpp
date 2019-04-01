#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//create linked list
void insert(int data) {
	//allocate memory for new node
	struct node *link = (struct node*)malloc(sizeof(struct node));
	
	link->data = data;
	link->next = NULL;
	//if head is empty create new list
	if(head==NULL)
	{
		head=link;
		return;
	}
	current = head;
	
	//move to the end of list
	
	while(current->next!=NULL)
	current = current->next;
	
	//insert link at the end of the list
	current->next = link;
	
}

void display(){
	struct node *ptr = head;
	printf("\n[head] =>");
	//start from beginning
	while(ptr != NULL)
	{
		printf(" %d =>",ptr->data);
		ptr = ptr->next;
	}
	printf(" [null]\n");
}

void update_data(int old, int new1)
{
	int pos = 0;
	if(head ==NULL)
	{
		printf("linked list not initialized");
		return;
	}
	current = head;
	while(current->next!=NULL)
	{
		if (current->data==old)
		{
			current->data=new1;
			printf("\n%d found at position %d, replaced with %d\n", old, pos, new1);
			return;
		}
		current = current->next;
		pos++;
	}
	printf("%d does not exist in the list\n",old);
	
}

int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);	
	insert(56);
	display();
	update_data(40,44);
	display();
	return 0;
}
