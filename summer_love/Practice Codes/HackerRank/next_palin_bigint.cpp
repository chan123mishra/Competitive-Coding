#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    int i;
    int t;
    cin>>t;
    char a[t][1000000];
    char c;
    int j = 0;
    int c[1000000];
    int p ;
    for(i = 0 ; i < t; i++)
    {
        p = 0;

        while(a[i][j] != '\n')
        {
            cin>>a[i][j];
            j++;
            c[i] = ++p;
        }
    }

    for(i= 0; i< t; i++)
    {


    }
}
