#include<bits/stdc++.h>
struct node
{
    int val;
    struct node *lc;
    struct node *rc;
};
struct node *level[1000];
using namespace std;
int flag = 1;
struct node *createNode(int val)
{
    node *newnode;
    newnode = new node;
    newnode->val = val;
    newnode->lc = NULL;
    newnode->rc = NULL;
    return newnode;
};
struct node *insertnode(struct node *root, int val)
{
    if(root == NULL)
    {
        root = createNode(val);
        flag = -flag;
        return root;
    }

    node *temp = root;
  /*  node *temp = root;
    if(temp->lc == NULL && temp->rc == NULL)
    {
        temp->lc = createNode(val);
    }

    else if(temp->lc != NULL && temp->rc == NULL)
    {
        temp->rc = createNode(val);
    }
    */
    if(flag < 0)
    temp->lc = insertnode(temp->lc,val);
    else
    temp->rc = insertnode(temp->rc,val);
    return root;
};

void traversal(struct node *root)
{
    if(root == NULL)
    {
       // cout<<"\nTree is empty\n";
        return;
    }

    traversal(root->lc);
    cout<<root->val<<" ";
    traversal(root->rc);
}

queue<node*>q;
void levelorder(node *root)
{
    queue<node *>que;
    que.push(root);
    while(!que.empty())
    {
        node *temp = que.front();
        que.pop();
        cout<<temp->val<<" ";
        if(temp->lc != NULL)
        {
            que.push(temp->lc);
        }
        if(temp->rc != NULL)
        {
            que.push(temp->rc);
        }
    }
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

int levele = 0;
struct node *insertlevel(struct node *root, int data)
{
    if(root == NULL)
    {
          root = createNode(data);
          level[levele++] = root;
          q.push(root);
          return root;
    }

    node *temp = q.front();

  // cout<<"temp->va = "<< temp->val;
    //cout<<endl;

    if(temp->lc == NULL)
    {
        temp->lc = createNode(data);
        q.push(temp->lc);
        return root;
    }
    else if(temp->rc == NULL)
    {
        temp->rc = createNode(data);
        q.push(temp->rc);
        return root;
    }

    if(temp->rc != NULL && temp->lc != NULL)
    {
       // cout<<"Popped value = "<<temp->val<<endl;
        q.pop();
        root = insertlevel(root,data);
    }

    return root;
};

int findmax(node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int l,r,max;
    l = findmax(root->lc);
    r = findmax(root->rc);
    if(l > r)
        max = l;
    else
        max = r;

    if(max > root->val)
    {
        return max;
    }
    else
        max = root->val;

    return max;
}
int main()
{
    int n;
    cin>>n;
    int numlevel = (int)log2((double)(n+1));

    node *root = NULL;
    for(int i = 0; i < n;i++)
    {
        int ele;
        cin>>ele;

        root = insertlevel(root,ele);
    }
    cout<<"\nLevel order traversal :-\n";
 levelorder(root);
 cout<<"\nThe maximum value stored in the binary tree will be\n";
 cout<<findmax(root);
 cout<<endl;
 //traversal(root);
  cout<<endl;
    return 0;
}
