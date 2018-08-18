#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *link;
};
struct node *insert(struct node* head, int data)
{
      struct node *temp;
  struct node *newNode;

  newNode = (struct node *)malloc(sizeof(struct node));
  newNode->val = data;
  newNode->link = NULL;

    if(head = NULL)
    {
        head = newNode;
        return head;
    }
    temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
    }
    temp = newNode;
    return head;
};
void display(struct node *head)
{
    int ctr = 0;
    if(head == NULL)
    {
        cout<<"EMPTY\n";
    }
    while(head != NULL)
    {
        cout<<head->val<<" ";
        head = head->link;
        ctr++;
    }
    cout<<"\nTotal no. of nodes are "<<ctr<<"\n";

}
int main()
{
    int n;
    cin>>n;
}
