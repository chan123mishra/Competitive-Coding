
#include<bits/stdc++.h>
using namespace std;
struct node
{
    char val;
    struct node *lc;
    struct node *rc;
};

void inorder_trav(node *root)
{ if(root == NULL)
{
return;
}
inorder_trav(root->lc);
cout<<root->val<<" ";
inorder_trav(root->rc);
}

int search_ind(char a[], int l, int h ,char c)
{

     for(int i = l; i <= h; i++)
    {
        if(a[i] == c)
        {
          return i;
        }
    }
}
//int preInd = 0 ;

/*struct node* buildTree(char in[], char pre[], int inStrt, int inEnd)
{
  //static int preIndex = 0;

  if(inStrt > inEnd)
     return NULL;


  struct node *tNode ;
  tNode = new node;
  tNode->val = pre[preIndex++];
  //cout<<"Node->val = "<<tNode->val<<endl;
  tNode->lc = NULL;
  tNode->rc = NULL;

  if(inStrt == inEnd)
    return tNode;

  int inIndex = search_ind(in, inStrt, inEnd, tNode->val);


  tNode->lc = buildTree(in, pre, inStrt, inIndex-1);
  tNode->rc = buildTree(in, pre, inIndex+1, inEnd);

  return tNode;
}*/

int preInd = 0 ;
node *buildtree(char preorder[], char inorder[], int l, int h)
{
    //static int preInd = 0;
    //char c = preorder[preInd++];
    if(l > h)
        return NULL;

    node *newnode = new node;
    newnode->val = preorder[preInd++];
    newnode->lc = NULL;
    newnode->rc = NULL;

    if(l == h)
        return newnode;

    int m = search_ind(inorder,l,h,newnode->val);


    newnode->lc = buildtree(preorder,inorder,l,m-1);
    newnode->rc = buildtree(preorder,inorder,m+1,h);
    return newnode;
}

int main()
{
    char preorder[100];
    char inorder[100];
    char c;
    int k = 0;
    scanf("%c",&c);
    while(c  != '\n')
    {
    preorder[k++] = c;
    scanf("%c",&c);
    }
    int j = 0;
    char d;
    scanf("%c",&d);
    while(d != '\n')
    {
    inorder[j++] = d;
    scanf("%c",&d);
    }
    //cout<<"Size of preorder = "<<sizeof(preorder)/sizeof(preorder[0])<<" and size of Inorder = "<<sizeof(inorder)/sizeof(inorder[0])<<endl;
    for(int i = 0; i <= k - 1; i++)
    {
        cout<<preorder[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i <= k - 1; i++)
    {
        cout<<inorder[i]<<" ";
    }
    cout<<endl;
    node *root = NULL;
    root = buildtree(preorder,inorder,0,k-1);
    inorder_trav(root);
    return 0;
}
/*
ABDECF
DBEAFC
*/
/*
#include<stdio.h>
#include<stdlib.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
/*struct node
{
  char data;
  struct node* left;
  struct node* right;
};

/* Prototypes for utility functions */
/*int search(char arr[], int strt, int end, char value);
struct node* newNode(char data);

/* Recursive function to construct binary of size len from
   Inorder traversal in[] and Preorder traversal pre[].  Initial values
   of inStrt and inEnd should be 0 and len -1.  The function doesn't
   do any error checking for cases where inorder and preorder
   do not form a tree */
/*struct node* buildTree(char in[], char pre[], int inStrt, int inEnd)
{
  static int preIndex = 0;

  if(inStrt > inEnd)
     return NULL;

  /* Pick current node from Preorder traversal using preIndex
    and increment preIndex */
 /* struct node *tNode = newNode(pre[preIndex++]);

  /* If this node has no children then return */
 /* if(inStrt == inEnd)
    return tNode;

  /* Else find the index of this node in Inorder traversal */
  //int inIndex = search(in, inStrt, inEnd, tNode->data);

  /* Using index in Inorder traversal, construct left and
     right subtress */
  //tNode->left = buildTree(in, pre, inStrt, inIndex-1);
  //tNode->right = buildTree(in, pre, inIndex+1, inEnd);

  //return tNode;
//}

/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]
   The function assumes that value is present in in[] */
/*int search(char arr[], int strt, int end, char value)
{
  int i;
  for(i = strt; i <= end; i++)
  {
    if(arr[i] == value)
      return i;
  }
}

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
/*struct node* newNode(char data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}

/* This funtcion is here just to test buildTree() */
/*void printInorder(struct node* node)
{
  if (node == NULL)
     return;

  /* first recur on left child */
  //printInorder(node->left);

  /* then print the data of node */
  //printf("%c ", node->data);

  /* now recur on right child */
  //printInorder(node->right);
//}

/* Driver program to test above functions */
/*int main()
{
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int len = sizeof(in)/sizeof(in[0]);
  struct node *root = buildTree(in, pre, 0, len - 1);

  /* Let us test the built tree by printing Insorder traversal */
  /*printf("\n Inorder traversal of the constructed tree is \n");
  printInorder(root);
  getchar();
}
*/
