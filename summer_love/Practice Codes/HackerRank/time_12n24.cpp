#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    cin>>str;
    int n;
    n = strlen(str);
    //char c = '9';
    //int a = c;
    //cout<<(int)c - 48;
    //cout<<a;
    //cout<<strlen(str);
   // cout<<str[n-1]<<" "<<str[n-2];
   int c;
    if(str[n -1] == 'M' && str[n - 2] == 'P')
    {
        int a = str[0] - 48;
        int b = str[1] - 48;
        if(a == 1 && b == 2)
        {
            cout<<"12";
            for(int i = 2; i < n-2; i++)
                cout<<str[i];
            exit(0);
        }
         c = 10 * a + b + 12;
        cout<<c;
        for(int i = 2; i < n-2; i++)
        {
            cout<<str[i];
        }
    } else if (str[0] == '1' && str[1] == '2' && str[n - 2] == 'A')
    {
        cout<<"00";
        for(int i = 2; i < n -2; i++)
        {
            cout<<str[i];
        }
    }
    else
    {
        for(int i = 0; i < n - 2; i++)
        cout<<str[i];
    }
    return 0;
}
