#include<bits/stdc++.h>
using namespace std;
int fnc(int l, int h, int A)
{

    if(l >= h)
        return l;

    int mid = (l+h)/2;
  //  cout<<"Range : "<<l<<" to "<<h<<endl;
    //cout<<"mid = "<<mid<<endl;
    if(mid*mid == A)
    {
        return mid;
    }
    if(mid*mid > A)
        return fnc(l,mid-1,A);
    else
    return fnc(mid+1,h,A);

}
int sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A == 0)
    return A;
    int res = fnc(1,A,A);
    cout<<"res = "<<res<<endl;
    if(res*res > A)
    return res-1;
    else
    return res;
}

int main()
{

    int n;
    cin>>n;
    cout<<sqrt(n)<<endl;
    return 0;
}
