#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.

 map<Node *, int>mp;
 while(headA != NULL)
 {
     mp.insert(make_pair(headA,1));
     headA = headA->next;
 }

 while(headB != NULL)
 {
     if(mp.find(headB)->second == 1)
     {
         return headB->data;
     }

     headB = headB->next;
 }

 return -1;
}
int main()
{

}
