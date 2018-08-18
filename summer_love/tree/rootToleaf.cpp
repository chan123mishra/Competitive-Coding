#include<bits/stdc++.h>
struct node
{
int val;
struct node *lc;
struct node *rc;
};

using namespace std;
int ind = 0;
int rec_ancestor(struct node *root, int val)
{
    if(root == NULL)
        return 0;

    if(root->val == val)
    {
        return 1;
    }

    if(rec_ancestor(root->lc,val) || rec_ancestor(root->rc,val))
    {
        cout<<root->val<<" ";
    }

}
int maxh;
int sumall(struct node *root)
{
    int sum = 0;
    if(root == NULL)
    {
        return 0;
    }

    sum = root->val + sumall(root->lc) + sumall(root->rc);
    return sum;
}
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->val = data;
  node->lc = NULL;
  node->rc = NULL;

  return(node);
}
int height(struct node *root)
{
    int lefth,righth;
    if(root == NULL)
        return 0;
    lefth = height(root->lc);
    righth = height(root->rc);
    if(lefth > righth)
        return 1 + lefth;
    else
        return 1+righth;
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

struct node *Lca(struct node *root, int a, int b)
{
    if(root == NULL)
        return root;
    if(root->val == a || root->val == b )
        return root;

    node *leftlc, *rightlc;
    leftlc = Lca(root->lc,a,b);
    rightlc = Lca(root->rc,a,b);
    if(leftlc && rightlc)
        return root;

    else if(leftlc)
        return leftlc;
    else
        return rightlc;
};
struct node *mirror(struct node *root)
{

    if(root == NULL)
        return root;
    else
    {
            root->lc = mirror(root->lc);
            root->rc = mirror(root->rc);
            swap(root->lc,root->rc);
    }
    return root;
};
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
int ctr = 0;
void printarr(int a[],int n)
{
    for(int i=0; i < n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
}
void pathAndGivensum(struct node *root, int gsum)
{
    if(root == NULL)
        return;

    gsum = gsum - root->val;
    if(!root->lc && !root->rc && gsum == 0)
        ctr++;
    else
    {
        pathAndGivensum(root->lc,gsum);
        pathAndGivensum(root->rc,gsum);
    }
}
void printall(struct node *root, int a[], int len)
{
    if(root == NULL)
    {
        return;
    }

    a[len++] = root->val;
    if(root->lc == NULL && root->rc == NULL)
    {
        printarr(a,len);
    }
    else
    {
        printall(root->lc,a,len);
        printall(root->rc,a,len);
    }
}

int diameter(struct node *root)
{
    if(root == NULL)
        return 0;
    int leftd = diameter(root->lc);
    int rightd = diameter(root->rc);

    int lefth = height(root->lc);
    int righth = height(root->rc);

    return max(1+lefth+righth,max(leftd,rightd));
}
int parent[100];
void display_ances(int temp)
{
    if(parent[temp] != -1 )
    {
        cout<<parent[temp]<<" ";
        display_ances(parent[temp]);
    }
}
void iter_ancestor(struct node *root, int k)
{
    stack<node*>st;
    st.push(root);
    parent[root->val] = -1;
    while(!st.empty())
    {
        node *temp;
        temp = st.top();
        if(temp->val == k)
        {
            display_ances(temp->val);
            return;
        }
        st.pop();
        if(temp->lc)
        {
            parent[temp->lc->val] = temp->val;
            st.push(temp->lc);
        }
        if(temp->rc)
        {
            parent[temp->rc->val] = temp->val;
            st.push(temp->rc);
        }
    }
}

void zigzag_trav(struct node *root)
{
    stack<node*>curlevel;
    stack<node*>nextlevel;
    int level = 0;
    curlevel.push(root);
    node *temp;
    while(!curlevel.empty())
    {
            temp = curlevel.top();
            curlevel.pop();
            if(temp)
            {

                cout<<temp->val<<" ";
                if(level % 2 == 0)
                {
                if(temp->lc)
                {
                    nextlevel.push(temp->lc);
                }
                if(temp->rc)
                {
                    nextlevel.push(temp->rc);
                }
                }
                else
                {
                    if(temp->rc)
                    {
                        nextlevel.push(temp->rc);
                    }
                    if(temp->lc)
                    {
                        nextlevel.push(temp->lc);
                    }

                }
            }

        if(curlevel.empty())
        {

            level++;
            //nextlevel.pop();
            swap(curlevel,nextlevel);
        }
    }
}

// map<int,int>mp;

void vert_sum(struct node *root, int d,map<int,int>&mp)
{
    if(root == NULL)
        return ;


    vert_sum(root->lc,d - 1,mp);

     int s;
    if(mp.find(d) != mp.end())
    {
        s = mp.find(d)->second;
       // cout<<"d = "<<d<<" and prev sum = "<<s<<endl;
    }
    else
        s = 0;
    int val = s + root->val;
    cout<<"d = "<<d<<" and prev sum = "<<val<<endl;
    //mp.insert(make_pair(d,val)); It is not working
    mp[d] = val;

    vert_sum(root->rc,d + 1,mp);
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
     /*
     inorder(root);
     cout<<endl;
     int a[n];
     memset(a,0,sizeof(a));
     printall(root, a, 0);
     cout<<"Path and given sum --->"<<endl;
     ctr = 0;
     int num;
     cout<<"Enter the sum val\n";
     cin>>num;
     pathAndGivensum(root,num);
     cout<<"Number of path with "<<num<<" sum are "<<ctr<<endl;*/
     /*struct node *root = newNode(1);
  root->lc        = newNode(2);
  root->rc       = newNode(3);
  root->lc->lc  = newNode(4);
  root->lc->rc = newNode(5);*/
  //cout<<diameter(root)<<endl;
  //cout<<sumall(root)<<endl;
  node *dummy = root;
  //dummy = mirror(root);
  inorder(root);
  //dummy = mirror(root);
  cout<<endl;
  //inorder(dummy);
    /*cout<<"LCA:-"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<Lca(root,a,b)->val<<endl;
    */
    //int e;
    //cin>>e;
    //int res = rec_ancestor(root,e);
    //iter_ancestor(root,e);
    //cout<<endl;
    //cout<<"Zigzag traversal"<<endl;
   // zigzag_trav(root);
    //memset(hashe,0,sizeof(hashe));
    map<int,int>mp;
    vert_sum(root,0,mp);

   //cout<<mp<<endl;
     map<int,int>::iterator it;
     for(it = mp.begin(); it != mp.end(); it++)
     {
         cout<<it->first<<" "<<it->second<<endl;
     }
     return 0;
 }
