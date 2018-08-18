#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    double res = 1;
    while(t--)
    {
        int n;
        cin>>n;
        int r;
        cin>>r;
        double sum = 0;
        double prob = 0;
        for(int i = 1; i <= n; i++)
        {
            sum = sum + (double)(pow(i,2))/(double)(pow(r,2));
        }
         prob = 1/sum;
        // cout<<"Prob = "<<prob<<endl;
        res = res * (double)(prob * pow(n,2)*pow(n+1,2))/(double)(4 * pow(r,3));

       // cout<<prob<<endl;
    }
    //res = floor(res*10000)/10000;
printf("%.4f\n",res);
//cout<<res<<endl;
    return 0;
}
