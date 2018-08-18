//Moore Voting algo :- if any number is a majority element then if all of its occurence are cancelled out by other elements, still few of its element will left in the array
#include<bits/stdc++.h>
using namespace std;
int findmajor(int a[], int n)
{
    int i = 1;
    int ctr = 1;
    int maj_ind = 0;
    while(i < n)
    {
        if(a[i] == a[maj_ind])
        {
            ctr++;
        }
        else
        {
            ctr--;
            if(ctr == 0)
            {
                maj_ind = i;
                ctr = 1;
            }
        }
        i++;
    }

    return a[maj_ind];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int maj = findmajor(a,n);
    int ctr = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == maj)
        {
            ctr++;
        }
    }
    if(ctr > (n/2))
    {
        cout<<maj<<endl;
    }
    else
        cout<<"NO Majority Element"<<endl;

    }

    return 0;
}
