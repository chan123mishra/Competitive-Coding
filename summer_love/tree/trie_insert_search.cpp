#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *child[123];
    bool leaf;
};
node *getnode()
{
    node *newnode = new node;
    for(int i = 0; i < 123; i++)
    {
        newnode->child[i] = NULL;
    }
    newnode->leaf = false;
}
/*void dfs_trie(node *root)
{
    if(root == NULL)
    {
        return ;
    }

    for(int i = 0; i < 123; i++)
    {
        if(root->child[])
    }
}*/
node *insert_trie(node *root, char a[])
{
    int l = strlen(a);
    node *temp;
    temp = root;
    for(int i = 0; i < l; i++)
    {
        if(temp->child[(int)a[i]])
        {
            cout<<a[i]<<" is already present\n";
        }
        if(!temp->child[(int)a[i]])
        {
            temp->child[(int)a[i]] = getnode();
        }
       /* if(temp->child[(int)a[i]])
        {
            cout<<a[i]<<" is Inserted\n";
        }
        else
        {
            cout<<a[i]<<" cant be inserted\n";
        }*/
        temp = temp->child[(int)a[i]];
    }
    temp->leaf = true;
    return root;
}

bool search_trie(node *root, char a[])
{
    int l = strlen(a);
    node *temp = root;
    for(int i = 0; i < l; i++)
    {
        if(!temp->child[(int)a[i]])
        {
            cout<<a[i]<<" is not found\n";
            return false;
        }
        temp = temp->child[(int)a[i]];
    }
    return true;
}
int main()
{
    char a[10][10];
    int n;
    cin>>n;
    node *root = getnode();
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        root = insert_trie(root,a[i]);
    }
//    dfs_trie(root);
   // cout<<"Hello\n";
    char searchstr[10];
    cin>>searchstr;
    if(search_trie(root,searchstr))
    {
        cout<<"Search is successful\n";
    }
    else
        cout<<"Not successful\n";

    return 0;
}
