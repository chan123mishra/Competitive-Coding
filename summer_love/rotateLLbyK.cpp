#include <iostream>
using namespace std;
struct node
{
int val;
struct node *next;
};

struct node* insertNode(struct node *head, int val)
{
	if(head == NULL)
	{
	node *newnode = new node;
	newnode->val = val;
	newnode->next = NULL;
	return newnode;
	}
	else
	{
	node *temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	node *newnode = new node;
	newnode->val = val;
	newnode->next = NULL;
	temp->next = newnode;
	}
return head;
}
void traverseLL(struct node *head)
{
	while(head != NULL)
	{
		cout<<head->val<<" ";
		head = head->next;
	}
	cout<<endl;
}
struct node *rotateLL(struct node *head, int k)
{
struct node *temp = head;
int i = 1;
while(i < k)
{
	temp = temp->next;
	i++;
}
struct node *nextN = temp->next;
temp->next = NULL;
struct node *res = nextN;
while(nextN->next != NULL)
{
	nextN = nextN->next;
}
nextN->next = head;
return res;
}

int main() {
	// your code goes here
	struct node *head = NULL;
	int n;
	cin>>n;
	while(n--)
	{
		int ele;
		cin>>ele;
		head = insertNode(head,ele);
	}
	
	int k;
	traverseLL(head);
	cin>>k;
	head = rotateLL(head,k);
	traverseLL(head);
	return 0;
	
}
