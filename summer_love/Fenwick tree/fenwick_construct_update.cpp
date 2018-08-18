#include<bits/stdc++.h>
using namespace std;
int findparent(int n)
{
    int parent = n - (n & -n);
    return parent;
}
int getnext(int n)
{
    int next;
    next = n + ( n & -n);// negative number is 2's complement of the number(first complement the number and then add one) , so after taking 2's complement and anding with the original number and then adding it with the original number
    return next;
}

int getsum(int fenwick[], int n, int i)
{
    int cur = i + 1;
    int sum = 0;
    while(cur != 0)
    {
        sum = sum + fenwick[cur];
        cur = findparent(cur);
    }
    return sum;
}
void update(int a[], int fenwick[], int i, int n)
{
    int sum = a[i];
    int cur = i + 1;
    while(cur <= n )
    {
        fenwick[cur] = sum + fenwick[cur];
       // sum = fenwick[cur];
        cur = getnext(cur);
    }
}
void construct_fenwicktree(int a[], int fenwick[], int n)
{
    for(int i = 0; i < n; i++)
    {
        update(a,fenwick,i,n);
    }
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
    int fenwick[n+1];
    for(int i = 0; i <= n; i++)
        fenwick[i] = 0;
    //memset(fenwick,0,sizeof(fenwick));
    construct_fenwicktree(a,fenwick,n);
    cout<<"Fenwick tree\n";
    for(int i = 1; i <= n; i++)
    {
	cout<<fenwick[i]<<" ";
	}

	cout<<endl;

    cout<<getsum(fenwick,n,4)<<endl;
    return 0;
}
