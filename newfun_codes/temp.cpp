#include<bits/stdc++.h>
using namespace std;

struct node
{
int val;
struct node* next;
};

node *createNew(int val)
{
struct node* newnode = (node*)malloc(sizeof(node));
newnode->val = val;
newnode->next = NULL;
return newnode;
}

void traverseLL(struct node *head)
{
 if(head == NULL)
	return;

 cout<<head->val<<" ";
 traverseLL(head->next);
}
void makeLL(struct node** head,int val)
{
	if(*head == NULL)
	{
		*head = createNew(val);
		return;
	}
	struct node*temp = *head;
	
	while(temp->next!= NULL)
	{
		temp = temp->next;
	}
	
	temp->next = createNew(val);
	return;
}
int main()
{
int n;
cin>>n;
node *head = NULL;
for(int i = 0; i < n; i++)
{
        int ele;
	cin>>ele;
	makeLL(&head,ele);
}

traverseLL(head);
cout<<endl;

return 0;
}	

