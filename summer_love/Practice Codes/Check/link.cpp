#include<bits/stdc++.h>
using namespace std;
struct node
{
int val;
struct node *next;
};
int main()
{
node *head = NULL;
head =(struct node *) malloc(sizeof(struct node ));
int n;
cin>>n;
if(n >= 1)
{
cin>>head->val;
}
struct node *neew;
struct node *temp = head ;
for(int i = 0 ; i < n - 1; i++)
{
neew =(struct node *) malloc(sizeof(struct node ));

cin>>neew->val;
temp -> next = neew;
temp = temp->next;
}
temp->next = NULL;
for(temp = head; temp -> next != NULL ; temp = temp->next)
{
cout<<temp->val<<" ";
//temp= temp->next;
}
cout<<temp->val<<" ";
return 0;
}
int length(struct node *head)
{

    struct node *temp;
    temp = head;

    int l;
    l = 0;
    if(temp->next == NULL)
    {
        return 1;
    }

    l = l + length(temp);
    }
}
