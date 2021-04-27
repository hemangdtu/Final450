// Reverse a linked list (Recursively and Iteratively)

#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void insertAtHead(node* &head, int data)
{
	if(head == NULL)
	{
		head = new node(data);
		return;
	}
	node *n = new node(data);
	n -> next = head;
	head = n;
}

void printLinkedList(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
	cout<<"\n";
}

node* buildLinkedList()
{
	int data;
	cin>>data;
	node* head = NULL;
	while(data!=-1)
	{
		insertAtHead(head, data);
		cin>>data;
	}
	return head;
}

ostream& operator<<(ostream &os, node* head){
	printLinkedList(head);
	return os;
}

istream& operator>>(istream &is, node*&head){
	head = buildLinkedList();
	return is;
}

void reverseLinkedList(node*&head)
{
	if(head -> next == NULL || head == NULL)
		return;
	node* prev = NULL;
	node* current = head;
	node* next;
	while(current != NULL)
	{
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

node* reverseLinkedListRecursion(node*&head)
{
	if(head -> next == NULL || head == NULL)
	{
		return head;
	}
	node* shead = reverseLinkedListRecursion(head -> next);
	node* temp = head -> next;
	temp -> next = head;
	head -> next = NULL;
	return shead;
}

int main()
{
	node* HEAD = NULL;
	cin >> HEAD;
	cout << HEAD;
	reverseLinkedList(HEAD);
	cout << HEAD;
	HEAD = reverseLinkedListRecursion(HEAD);
	cout << HEAD;
	return 0;
}