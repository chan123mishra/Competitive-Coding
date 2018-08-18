#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char s1[101];
    char s2[101];

    while(t--)
    {
        cin>>s1;
        cin>>s2;
        int maX = 0;
        int miN = 0;
        int i = 0;
        while(i < strlen(s1))
        {
       //     cout<<s1[i]<<endl;
          //  cout<<s2[i]<<endl;
            if(s1[i] == '?' || s2[i] == '?')
            {
                maX++;
            }

            else if(s1[i] != s2[i])
            {
                maX++;
                miN++;
            }
            i++;
        }

       cout<<miN<<" "<<maX<<endl;
       // s1.clear();
        //s2.clear();
    }

    return 0;
}
