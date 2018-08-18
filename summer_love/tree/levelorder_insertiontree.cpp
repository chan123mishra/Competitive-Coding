#include<bits/stdc++.h>
struct node
{
int val;
struct node *lc;
struct node *rc;
};

using namespace std;

struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}
void inorder(node *root)
{ if(root == NULL)
{
return;
}
inorder(root->lc);
cout<<root->val<<" ";
inorder(root->rc);
}

struct node *insert_levelorder(struct node *root, int ele)
{
 queue<node *>q;
 node *newNode = new node;
 newNode->lc = NULL;
 newNode->rc = NULL;
 newNode->val = ele;
 if(root == NULL)
 {
     root = newNode;
     return root;
 }
 q.push(root);
 node *temp;
 while(!q.empty())
 {
     temp = q.front();
     q.pop();

         if(temp->lc)
         {
             q.push(temp->lc);
         }
         else
         {
             temp->lc = newNode;
             return root;
         }
         if(temp->rc)
         {
             q.push(temp->rc);
         }
         else
         {
             temp->rc = newNode;
             return root;
         }

     }

     return root;

 }

void levelteller(struct node *root)
{
    int level = 1;
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *temp = q.front();

        //cout<<temp->val<<" ";
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            cout<<"<-------LEVEL "<<level<<" ends here--------->";
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
            level++;
        }
        else
        {
        cout<<temp->val<<" ";
        if(temp->lc)
            q.push(temp->lc);
        if(temp->rc)
            q.push(temp->rc);

    }

}
}
 int main()
 {
     int n;
     cin>>n;
     int ele;
     node *root = NULL;
     for(int i = 0; i < n; i++)
     {
         cin>>ele;
         root = insert_levelorder(root,ele);
     }
     inorder(root);
     cout<<endl;
     levelteller(root);
     return 0;
 }
