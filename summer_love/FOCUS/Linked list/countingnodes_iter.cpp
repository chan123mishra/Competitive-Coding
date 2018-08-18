#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    Node *result = NULL;
    if(headA == NULL && headB == NULL)
        {

        return NULL;
    }
    else if(headA == NULL && headB != NULL)
        {
        return headB;
    }
    else if(headA != NULL && headB == NULL)
        {
        return headA;
    }

       //Node *neew = new Node;
        if(headA->data < headB->data)
            {
                result = headA;
                headA = headA->next;
        }
        else
            {
             result = headB;
             headB = headB->next;
        }


    Node *temp = result;
    while(headA != NULL && headB != NULL)
    {
        if(headA->data < headB->data)
        {
            temp->next = headA;
            temp = temp->next;
            headA = headA->next;
        }
        else
        {
            temp->next = headB;
            temp = temp->next;
            headB = headB->next;
        }
    }

    if(headA == NULL)
    {
        temp->next = headB;
    }
    else if(headB == NULL)
    {
        temp->next = headA;
    }

    return result;
/*
    if(result == NULL)
        {
        Node *neew = new Node;
        if(headA->data < headB->data)
            {
            neew->data = headA->data;
            neew->next = NULL;
            result = neew;
            headA = headA->next;
        }
        else
            {
             neew->data = headB->data;
            neew->next = NULL;
            result = neew;
            headB = headB->next;
        }
        }
    else
        {
        Node *temp = result;
        while(headA != NULL && headB != NULL)
            {
            Node *neew = new Node;
             if(headA->data < headB->data)
            {
            neew->data = headA->data;
            neew->next = NULL;
            temp->next = neew;
            temp = temp->next;
            headA = headA->next;
        }
            else
                {
                  neew->data = headB->data;
            neew->next = NULL;
            temp->next = neew;
            temp = temp->next;
            headB = headB->next;
            }
        }


    if(headA != NULL)
        {

        while(headA != NULL)
            {
            Node *neew = new Node;
            neew->data = headA->data;
            neew->next = NULL;
            temp->next = neew;
            temp = temp->next;
            headA = headA->next;
        }


    }
    else
        {
          while(headB != NULL)
            {
            Node *neew = new Node;
            neew->data = headB->data;
            neew->next = NULL;
            temp->next = neew;
            temp = temp->next;
            headB = headB->next;
        }
    }
}
    return result;
*/}

struct Node *deletenode(struct Node *head, int ele)
{
    if(head == NULL)
    {
        cout<<"List empty\n";
        return NULL;
    }

    if(head->data == ele)
    {
        head = head->next;
        return head;
    }
    Node *nextnode = head->next;
    Node *temp = head;

    while( nextnode->next != NULL )
    {
        if(nextnode->data == ele)
        {
            temp->next = nextnode->next;
            free(nextnode);
            return head;
        }

        temp = temp->next;
        nextnode = nextnode->next;
    }

    if(nextnode->data == ele)
    {
        temp->next = NULL;
        return head;
    }
};
/*Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    Node *headC = NULL;
    Node *temp1 = headA;
    Node *temp2 = headB;
    Node *temp3 = headC;

    while(temp1 != NULL && temp2 != NULL)
        {
        if(temp1->data < temp2->data)
            {
            temp3->next = temp1;
            temp3 = temp3->next;
        }
    }

    while(temp1 != NULL)
        {
        temp3->next = temp1;
        temp3 = temp3->next;
        temp1 = temp1->next;
    }
    while(temp2 != NULL)
        {
         temp3->next = temp2;
        temp3 = temp3->next;
        temp1 = temp1->next;
    }
    return headC;
}
*/
void searchnode(struct Node *head, int ele)
{
struct Node *temp;
temp = head;
while(temp != NULL && temp->data != ele)
{
    temp = temp->next;
}
if(temp == NULL)
{
    cout<<"\n Not found \n";
}
cout<<temp->data<<" is found\n";

}
struct Node *insert(struct Node *head, int ele)
{
  struct Node *temp;
  struct Node *newnode;

  newnode = (struct Node *)malloc(sizeof(struct Node));
  newnode->data = ele;
  newnode->next = NULL;
  if(head == NULL)
  {
      head = newnode;
      return head;
  }
  temp = head;

  while(temp->next != NULL)
  {
      temp = temp->next;
  }
  temp->next = newnode ;


   return head;
}
void display(struct Node *head)
{
    int ctr = 0;
    if(head == NULL)
    {
        cout<<"EMPTY\n";
    }
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
      //  ctr++;
    }
    //cout<<"\nTotal no. of nodes are "<<ctr<<"\n";

}
void displayNthnode(struct Node* head, int n)
{
    int ctr = 1;
    while(head != NULL)
    {
        if(ctr == n){
                cout<<"\n"<<head->data;
            break;
        }
        head = head->next;
        ctr++;
    }
}
struct Node *reversenode(struct Node *head)
{
    struct Node *point1;
    struct Node *point;
    struct Node *temp;
    temp = head;
   // point1 = temp->next;
    point =  NULL;
    while(temp != NULL)
    {
        point1 = temp->next;
        temp->next = point;
        point = temp;
        temp = point1;
    }
    head = point;
    return head;

};
int main()
{
   struct Node *head;
   head = NULL;
    int n;
    cin>>n;
    int data;
    for(int i = 0; i < n; i++)
    {
        cin>>data;
        head = insert(head ,data);
    }
   // cout<<"First List is\n";
   // display(head);
    int n1;
    cin>>n1;
    struct Node *head1 = NULL;
    for(int i = 0; i < n1; i ++)
    {
        cin>>data;
        head1 = insert(head1,data);
    }
 //   cout<<"Second list is \n";
 //   display(head1);

    struct Node *head3 = NULL;
    head3 = MergeLists(head,head1);
    cout<<"\nIts third list is\n";
    display(head3);
    cout<<endl;
    cout<<"Enter the Node to be deleted in list3\n";
    int value;
    cin>>value;
    head3 = deletenode(head3,value);
    cout<<"\nAfter deletion list3\n";
    display(head3);
    /*int ele;
    cout<<"Enter the Node that has to be searched \n";
    cin>>ele;
    searchnode(head,ele);
    int noOfnode;
    cout<<"Enter the position of the Node to be found\n";
    cin>>noOfnode;
    cout<<"Node at the nth position is ";
    displayNthnode(head,noOfnode);
    cout<<"\nIf you want to delete any Node, enter the value to be deleted\n";
    int val1;
    cin>>val1;
    head = deletenode(head,val1);
    cout<<"Now the updated list is\n";
    display(head);
    cout<<"Reversed list is shown below\n";
   head = reversenode(head);
    display(head);*/
    return 0;

}
/*
struct Node *deletenode(struct Node *head, int data)
{
    struct Node *temp;
    struct Node*point = NULL;
    if(head->data == data)
    {
        head = head->next;
        return head;
    }

    else
    {
        temp = head;
        while(temp->next != NULL && temp->next->data != data )
        {
            temp = temp->next;
        }
        if(temp->next->data == data && temp->next != NULL)
        {
            point = temp->next;
            temp->next = point->next;
            return head;
        }
    }
    return head;

}
*/
