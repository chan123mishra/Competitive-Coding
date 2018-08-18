#include<bits/stdc++.h>
using namespace std;

class Search_binary
{
public:
    int binary_search_oop(int a[], int x, int l,int r)
    {
        int m;
        if(l < r)
        {
            m = (l + r)/2;

            if(a[m] == x)
                return m;
            else if(a[m] > x)
                return binary_search_oop(a,x,l,m);
            else
                return binary_search_oop(a,x,m+1,r);
        }
    }
};

int main()
{
    int n;
    cin>>n;
    Search_binary ob;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int x = 0;
    cin>>x;
    int res = ob.binary_search_oop(a,x,0,n-1);
    cout<<"Search is successful at "<<(res+1)<<" position in the array\n";
    return 0;
}
