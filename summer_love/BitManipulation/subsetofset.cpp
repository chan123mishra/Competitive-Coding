#include<bits/stdc++.h>
using namespace std;
void possibleSubsets(char A[], int N)
{
    for(int i = 0;i < (1<<N); ++i)
    {
        //cout<<"i = "<<i<<endl;
        for(int j = 0;j < N;++j)
        {
            if(i & (1 << j))
                cout <<A[j] <<" ";
        }
        cout << endl;
}
}

void fnc(char a[], int n)
{
   // cout<<n<<endl;
   for(int i = 0; i < pow(2,n); i++)
   {
       for(int j = 0; j < n; j++)
       {
           if(i & (1<<j))
           {
               //cout<<"i = "<<i<<",";
               cout<<a[j]<<" ";
           }
       }
       cout<<endl;
   }
}
int main()
{

    char a[] = {'a','b','c', '\0'};//char a[] = "abc";
    //possibleSubsets(a,strlen(a));
    fnc(a,strlen(a));
    /*if(pow((float)2,2) == (1<<2))
        cout<<"Lolo"<<endl;*/
    return 0;
}
