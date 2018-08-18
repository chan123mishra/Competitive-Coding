#include<iostream>
using namespace std;
int fact(int );
int main()
{
    int n;

    cin>>n;
   int s = fact(n);
   cout<<s;
    return 0;
}

int fact(int n)
{
   int s;
    if(n == 0)
    {
        return 1;
    }


    s = n;
    s = s * fact(--n);
     return s;



}
