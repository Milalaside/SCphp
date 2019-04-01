#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

void initNode(struct Node *head, int n){
	head->data = n;
	head->next =NULL;
}

// apending
void addNode(struct Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}
void insertFront(struct Node **head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = *head;
	*head = newNode;
}






void display(struct Node *head) {
	Node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}

int main() 
{
	struct Node *newHead;
	struct Node *head = new Node;
	
	cout<<"node in list "<<endl;
	initNode(head,10);
	addNode(head,20);
	addNode(head,30);
	addNode(head,35);
	addNode(head,40);
	display(head);
cout<<"insertion a node"<<endl;
cout<<"insert '5' and '35'"<<endl;
cout<<"the list"<<endl;
	insertFront(&head,5);
		insertFront(&head,65);
	display(head);



	return 0;
}
