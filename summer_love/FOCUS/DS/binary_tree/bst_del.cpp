#include<bits/stdc++.h>
using namespace std;
struct node
{ int val;
struct node *lc;
struct node *rc;
};
node *parpred = NULL;
struct node *find_inorderpred(struct node *root)
{
struct node *temp = root;
while(temp->rc != NULL)
{
parpred = temp;
temp = temp->rc;
}
return temp;
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
node *delNode(node *root, int data)
{
if(root == NULL)
{
    cout<<"Tree is empty\n";
    //return NULL;
}
//node *root = root;
node *par ;
if(root->val > data)
{
    root->lc = delNode(root->lc,data);
}
else if(root->val < data)
{
    root->rc = delNode(root->rc,data);
}
else
{


node *pred;

if(root->lc && root->rc)
{
pred = find_inorderpred(root->lc);
cout<<"pred->val"<<pred->val<<"\n";
root->val = pred->val;
root->lc = delNode(root->lc,root->val);
/*if(parpred == NULL)
{
root->lc = NULL;
}
if(!pred->lc && !pred->rc)
{
if(parpred->lc == root)
{
parpred->lc = NULL;
}
else
parpred->rc = NULL;
free(pred);
}
else if(pred->lc && !pred->rc)
{
if(parpred->lc == pred)
{
parpred->lc = pred->lc;
free(pred);
}
else
{
parpred->rc = pred->lc;
free(pred);
}
}
else if(pred->rc && !pred->lc)
{
if(parpred->lc == pred)
{
parpred->lc = pred->rc;
free(pred);
}
else
{
par->rc = root->rc;
free(root);
}
}*/
}
else if(!root->lc && !root->rc)
{
if(par->lc == root)
{
par->lc = NULL;
}
else
par->rc = NULL;
free(root);
}
else if(root->lc && !root->rc)
{
if(par->lc == root)
{
par->lc = root->lc;
free(root);
}
else
{
par->rc = root->lc;
free(root);
}
}
else if(root->rc && !root->lc)
{
if(par->lc == root)
{
par->lc = root->rc;
free(root);
}
else
{
par->rc = root->rc;
free(root);
}
}
}
return root;
}
int main()
{
node *first,*second,*third,*fourth,*fifth,*sixth,*seventh;
first = new node;
second = new node;
third = new node;
fourth = new node;
fifth = new node;
sixth = new node;
seventh = new node;
first->val = 4;
first->lc = second;
first->rc = third;
second->val = 3;
second->lc = fourth;
second->rc = fifth;
third->val = 6;
third->lc = sixth;
third->rc = seventh;
fourth->val = 1;
fourth->lc = NULL;
fourth->rc = NULL;
fifth->val = 2;
fifth->lc = NULL;
fifth->rc = NULL;
sixth->val = 5;
sixth->lc = NULL;
sixth->rc = NULL;
seventh->val = 7;
seventh->lc = NULL;
seventh->rc = NULL;
inorder(first);
first = delNode(first,2);
inorder(first);
return 0;
 }
