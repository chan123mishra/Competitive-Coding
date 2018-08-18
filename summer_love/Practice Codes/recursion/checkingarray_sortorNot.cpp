#include<bits/stdc++.h>
using namespace std;
void checkArray(int a[], int n)
{
    if(n == 1)
        {
            cout<<"Array is sorted"<<endl;
            return;
        }
    if(a[n - 1] < a[n- 2])
    {
        cout<<"Array is not sorted "<<endl;
        return;
    }

    checkArray(a,n - 1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    checkArray(a,n);
}
