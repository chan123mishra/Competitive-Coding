#include<bits/stdc++.h>
using namespace std;
void print(int *a, int n,int m)
{
for(int i = 0; i < n ; i++)
{
for(int j = 0; j < m; j++)
{
cout<<(*(a + i *n) + j)<<" ";

}
cout<<endl;
}
}
int main()
{
int m[3][3] = {{1,2,3},{2,5,6},{1,1,1}};
print((int *)m,3,3);
return 0;
}
