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

int lengthLinkedList(node* head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head -> next;
	}
	return count;
}

void insertAtHead(node* &head, int data) // Insertion at HEAD
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

node* buildLinkedList() // Building Linked List
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

node* buildLinkedListFile() // Building Linked List from File
{
	int data;
	node* head = NULL;
	while(cin>>data)
		insertAtHead(head, data);
	return head;
}


void printLinkedList(node* head) // Printing Linked List
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
	cout<<"\n";
}

ostream& operator<<(ostream &os, node* head){
	printLinkedList(head);
	return os;
}

istream& operator>>(istream &is, node*&head){
	head = buildLinkedList();
	return is;
}

node* MidPointLinkedList(node* head)
{
	if(head == NULL || head -> next == NULL)
		return head;
	node* slow = head;
	node* fast = head -> next;
	while((fast != NULL) && (fast -> next != NULL))
	{
		fast = fast -> next -> next;
		slow = slow -> next;
	}
	return slow;
}

node* MergeLinkedList(node* a, node* b)
{
	if(a == NULL)
		return b;
	if(b == NULL)
		return a;

	node* temp;
	if(a -> data < b -> data)
	{
		temp = a;
		temp -> next = MergeLinkedList(a -> next, b);
	}
	else
	{
		temp = b;
		temp -> next = MergeLinkedList(a, b -> next);
	}
	return temp;
}

node* SortLinkedList(node* head)
{
	if(head == NULL || head -> next == NULL)
		return head;
	
	node* mid = MidPointLinkedList(head);
	node* first = head;
	node* second = mid -> next;
	mid -> next = NULL;

	first = SortLinkedList(first);
	second = SortLinkedList(second);

	return MergeLinkedList(first, second);
}

int main()
{
	node* HEAD = NULL;
	cin >> HEAD;
	cout << HEAD;
	HEAD = SortLinkedList(HEAD);
	cout << HEAD;
	return 0;
}