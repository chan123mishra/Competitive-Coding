#include<bits/stdc++.h>
using namespace std;
/*struct node
{
    int val;
    struct node *prev;
    struct node *next;
};
*/
struct Node
{
    int val;
    struct Node *lc;
    struct Node *rc;
};

struct Node *createTNode(int ele)
{
    Node *neewnode = new Node;
    neewnode->val = ele;
    neewnode->lc = NULL;
    neewnode->rc = NULL;
    return neewnode;
};
/*struct node *createNode(int ele)
{
    node *newnode = new node;
    newnode->val = ele;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
};
*/
/*void traversal(struct node *root)
{
    while(root)
    {
        cout<<root->val<<" ";
        root = root->next;
    }
}
*/
void traversal_tree(Node *root)
{
    if(root == NULL)
        return ;

    traversal_tree(root->lc);
    cout<<root->val<<" ";
    traversal_tree(root->rc);
}
/*node * insert_list(struct node *root, int val)
{
    if(root == NULL)
    {
       root = createNode(val);
    }
    else
    {
    node *temp = root;
    while(temp->next)
    {
       temp = temp->next ;
    }

    temp->next = createNode(val);
    }
    return root;
}
*/
struct Node *insert_tree(struct Node *root,int val)
{
    if(root == NULL)
    {
        root = createTNode(val);
        //cout<<root->val<<" ";
        return root;
    }
    else
    {
        if(root->val > val)
        {
            root->lc = insert_tree(root->lc,val);
        }
        else if(root->val < val)
        {
            root->rc = insert_tree(root->rc,val);
        }
    }

    return root;
}
int main()
{
    int n;
    struct Node* root = NULL;
    cin>>n;
    int ele;
    for(int i = 0; i < n; i++)
    {
        cin>>ele;
        root = insert_tree(root,ele);
    }

    traversal_tree(root);
    cout<<endl;

}

