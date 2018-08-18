#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
int val;
struct node * link;
};
struct node *create(struct node *);
int main()
{
struct node * head = NULL;
 head = create(head);

  struct node *temp ;
    temp = head;
    for(temp = head; temp->link != NULL; temp = temp->link)
    {
        cout<<temp->val<<" ";
    }
    cout<<temp->val;
    return 0;

}
struct node * create(struct node *head)
{
    head =(struct node *) malloc(sizeof(struct node));
    cout<<"ENter the length of the list u want \n";
    int n;
    cin>>n;
    cout<<"ENter the elements in the list \n";
    cin>>head->val;
    head->link = NULL;
    struct node *temp;
    temp = head;
    struct node *neew;
    for(int i = 1; i < n ; i++)
    {
        neew = (struct node *) malloc(sizeof(struct node));
        cin>>neew->val;
        //neew->link = NULL;
        temp->link = neew;
        temp = neew;
    }
temp->link = NULL;
return head;

}
