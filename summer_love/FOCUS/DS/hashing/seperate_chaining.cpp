#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *next;
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
        head = head->next;
      //  ctr++;
    }
    //cout<<"\nTotal no. of nodes are "<<ctr<<"\n";

}
void search_key(struct node *head,int key)
{
    int flag = 0;
    while(head != NULL)
    {
        if(head->val == key)
        {
            cout<<"Value is found\n";
            flag = 1;
            break;
        }

        head = head->next;
    }
    if(flag == 0)
    {
        cout<<"Key is not found\n";
    }
}
node *createNew(int key)
{
    node *newNode = new node;
    newNode->val = key;
    newNode->next = NULL;
    return newNode;
}
struct node *insert_key(struct node *head, int key)
{
    if(head == NULL)
    {
        head = createNew(key);
        return head;
    }

    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    node *newnode = createNew(key);
    temp->next = newnode;
    temp = temp->next;
    return head;
};
struct node *deletenode(struct node *head, int ele)
{
    if(head == NULL)
    {
        cout<<"List empty\n";
        return NULL;
    }

    if(head->val == ele)
    {
        head = head->next;
        return head;
    }
    node *nextnode = head->next;
    node *temp = head;

    while( nextnode->next != NULL )
    {
        if(nextnode->val == ele)
        {
            temp->next = nextnode->next;
            free(nextnode);
            return head;
        }

        temp = temp->next;
        nextnode = nextnode->next;
    }

    if(nextnode->val == ele)
    {
        temp->next = NULL;
        return head;
    }
};

void displayTable(struct node *a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == NULL)
        {
            cout<<"Empty tuple\n";
            continue;
        }

            display(a[i]);
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    struct node* a[n];
    int m;
    cin>>m;
    for(int i = 0; i < n; i++)
        a[i] = NULL;
    for(int i = 0; i < m; i++)
    {
        int key;
        cin>>key;
        node *head = NULL;
        if(a[key % n] == NULL)
        {
            a[key % n] = insert_key(head,key);
        }

        else
        {
            a[key % n] = insert_key(a[key%n],key);
        }
    }

    displayTable(a,n);

    int k;
    cout<<"Element to be searched :\n";
    cin>>k;
    search_key(a[k%n],k);

    while(true)
    {
        cout<<"\nDo you want to delete some record? If yes enter 1 else 0\n";
        int ch;
        cin>>ch;
        if(ch == 0)
            break;

        cout<<"Enter the key to be deleted\n";
        int ele;
        cin>>ele;
        a[ele%n] = deletenode(a[ele%n],ele);

    }
    cout<<"After deletion of the keys\n";
    displayTable(a,n);
    return 0;
}
