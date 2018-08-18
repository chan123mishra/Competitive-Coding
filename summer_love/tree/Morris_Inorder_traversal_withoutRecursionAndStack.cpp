#include<bits/stdc++.h>
struct node
{
int val;
struct node *lc;
struct node *rc;
};
using namespace std;

struct node* newNode(int val)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->val = val;
  node->lc = NULL;
  node->rc = NULL;

  return(node);
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
 void morristraversal(struct node *root)
 {
 	struct node *current = root;
 	struct node *pred;
 	while(current)
	{
		if(!current->lc)
		{
			cout<<current->val<<" ";
			current = current->rc;
		}
		else
		{

			pred = current->lc;

			while(pred->rc != NULL && pred->rc != current)
			{
				pred = pred->rc;
			}
			if(!pred->rc)
			{
				pred->rc = current;
				current = current->lc;
			}
			else
			{
				pred->rc = NULL;
				cout<<current->val<<" ";
				current = current->rc;
			}
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

     morristraversal(root);
     cout<<endl;
 }
