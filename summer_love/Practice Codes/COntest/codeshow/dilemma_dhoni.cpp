#include<bits/stdc++.h>
using namespace std;
int indexofSmallestElement(int array[], int size)
{
int index = 0;

if (size != 1)
{

    int n = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < n)
        {
            n = array[i];
            index = i;
        }
    }
}
return index;
}
int main()
{
int t;
cin>>t;
int n,z;

while(t--)
{
cin>>n;
cin>>z;
int sum[n - z];
int o[n];
for(int i = 0;  i < n; i++)
{
cin>>o[n];
}
for(int i = 0 ; i <= (n - z - 1) ; i++)
{
int temp = 0;
for(int j = i; j <(i + z); j++)
{
temp = temp^o[j];
sum[i] = temp;
}
}
for(int j = 0; j < n -z ; j++)
    cout<<sum[j]<<" ";
/*int c = indexofSmallestElement(sum,n-z);
cout<<(c + 1);*/
}
return 0;
}
