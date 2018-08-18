#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    struct Node *next;
};

struct Node *createNode(int ele)
{
    Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->val = ele;
    newNode->next = NULL;
    return newNode;
};
void traverse(Node *root)
{
    if(root == NULL)
        return;
    cout<<root->val<<" ";
    traverse(root->next);
}
void pushfront(struct Node **head, int ele)
{
    if(*head == NULL)
    {
        (*head) = createNode(ele);
        return;
    }
    else
    {
    Node *tem = createNode(ele);
    tem->next = (*head);
    (*head) = tem;
    }
}

struct Node *reverselist(struct Node *root)
{
    struct Node *prev = NULL;
    struct Node *temp = root;
    struct Node *next;
    while(temp != NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;

    }
    root = prev;
    return root;
};

struct Node *recursivereverse(struct Node *cur, struct Node *prev)
{
    if(cur == NULL)
        return NULL;

    if(cur->next == NULL)
    {
            cur->next = prev;
          return cur;
    }
    struct Node *next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = recursivereverse(next, prev);
    return cur;
};

void frontbacksplit(struct Node *head, struct Node *&a,struct Node *&b)
{
    if(head == NULL || head->next == NULL)
    {
        a = head;
        b = NULL;
    }
    else
    {
        struct Node *fast;
        struct Node *slow;
        slow = head;
        fast = head->next;

        while(fast != NULL)
        {
           fast = fast->next;
           if(fast != NULL)
           {
               slow = slow->next;
               fast = fast->next;
           }
        }
        a = head;
        b = slow->next;
        slow->next = NULL;
    }
}

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
  struct Node* result = NULL;

  /* Base cases */
  if (a == NULL)
     return(b);
  else if (b==NULL)
     return(a);

  /* Pick either a or b, and recur */
  if (a->val <= b->val)
  {
     result = a;
     result->next = SortedMerge(a->next, b);
  }
  else
  {
     result = b;
     result->next = SortedMerge(a, b->next);
  }
  return(result);
}
void mergesort(struct Node *&head)
{
    if(head == NULL || head->next == NULL)
        return;

    struct Node *a;
    struct Node *b;

    frontbacksplit(head,a,b);
    mergesort(a);
    mergesort(b);
    head = SortedMerge(a,b);
}


int main()
{
    struct Node *head = NULL;
    int n;
    cin>>n;
    int ele;
    for(int i = 0; i < n; i++)
    {
        cin>>ele;
        pushfront(&head,ele);
    }

    cout<<endl;
    traverse(head);
    cout<<endl;
    //cout<<"Reverse"<<endl;
   // head = reverselist(head);
  //  head = recursivereverse(head,NULL);
    mergesort(head);
    traverse(head);
    return 0;
}


