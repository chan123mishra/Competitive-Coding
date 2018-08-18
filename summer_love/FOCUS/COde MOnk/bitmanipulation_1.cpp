#include<bits/stdc++.h>
using namespace std;
int countone(unsigned int n)
{
unsigned int count = 0;
while(n)
{

    if(n%2== 1)
        count++;
    n = n/2;
}
return count;
}

int main()
{
    int t;

    cin>>t;
    int n,k;
    int a;

    for(int j = 0; j < t; j++)
    {
        vector<unsigned int>vec;
        cin>>n;
        cin>>k;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
           // cout << countone(a) << endl;
            vec.push_back(countone(a));
        }
        sort(vec.begin(),vec.end());
        int sum = 0;
        for(int i = n - 1; i > (n - k - 1); i--)
        {
            sum = sum + vec[i];
        }

        cout<<sum << endl;
    }
    return 0;
}
