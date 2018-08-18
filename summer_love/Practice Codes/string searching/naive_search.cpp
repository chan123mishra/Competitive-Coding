#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    char b[20];
    cin>>a;
    cin>>b;
    int c = 0;
    int i,j;
    for(i = 0; i < strlen(a); i++)
    {
        for(j = 0 ; j < (strlen(b)); j++)
        {
           if(b[j] != a[i + j])
           {
               i = i + j;
               break;
           }
           c++;
        }
    }
    if(c == strlen(b))
    {
        cout<<"String is found\n";
    }
    else
        cout<<"String is not found\n";

    return 0;
}
