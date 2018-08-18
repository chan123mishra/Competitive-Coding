#include<bits/stdc++.h>
using namespace std;

int main()
{

    char c[105];
    int t;
    cin>>t;
    int i;
    int cp;
    int j;
    int l;
    //int sol[200];
    int k = 0;
    for(i = 0; i < t; i ++)
    {
        scanf("%s", c);
        l = strlen(c);
        cp = 0;
        j = 0;
        while(l--)
        {
            if(c[j] == 'A' || c[j] == 'D' || c[j] == 'O' || c[j] == 'P' || c[j] == 'R')
            {
                cp++;
            }
            if(c[j] == 'B')
            {
                cp = cp + 2;
            }
            j++;

        }
        cout << cp << endl;
    }
//    for( i = 0; i < k; i++)
//        cout<<sol[i]<<endl;
    return 0;
}
