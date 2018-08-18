#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *lc;
    struct node *rc;
};
node *findMaxleft(node *root)
{
    while(root != NULL)
        root = root->rc;

    return root;
}
struct node* deleteNode(node *head, int ele)
{
    if(head == NULL)
    {
        cout<<"there is no node to be deleted\n";
        return NULL;
    }
    if(head->val = ele)
    {
        head = NULL;
        return head;
    }

    node *temp = head;
    node *dummy;
    while(true)
    {
        if(ele < temp->val)
        {
            temp = temp->lc;
        }
        else if(ele > temp->val)
        {
            temp = temp->rc;
        }
        else
        {
            if(temp->lc != NULL && temp->rc == NULL)
            {
                dummy = findMaxleft(head);
                temp->val = dummy->val;

            }
        }
    }

}
void inorder(struct node *head)
{
    if(head == NULL)
        return;

        inorder(head->lc);
        cout<<head->val<<" "
        ;
        inorder(head->rc);

}
struct node *newNode(int ele)
{
    struct node* neew;
    neew =(struct node *)malloc(sizeof(struct node));
    neew->val = ele;
    neew->lc = NULL;
    neew->rc = NULL;
    return neew;
};

struct node *insertNode(struct node *head, int ele)
{
    if(head == NULL)
        {
            head = newNode(ele);
            return head;
        }

        struct node *temp = head;
        struct node *neew;
        while(true)
        {
            if(temp->val > ele)
            {
                if(temp->lc != NULL)
                    temp = temp->lc;
                else
                {
                temp->lc = newNode(ele);
                break;
            }
            }
            else
            {
                if(temp->rc != NULL)
                    temp = temp->rc;
                else{
                    temp->rc = newNode(ele);
                    break;
                }
            }
        }
        return head;
};
int main()
{

    int n;
    cin>>n;
    struct node *head = NULL;
    int value;
    for(int i = 0; i < n; i++)
    {
        cin>>value;
        head = insertNode(head,value);
    }
    inorder(head);
    return 0;
}
