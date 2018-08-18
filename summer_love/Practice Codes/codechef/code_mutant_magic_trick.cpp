#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[1000005];
    //map<char,int>freq;
    cin>>a;
    int q,ctr;
   cin>>q;

    //std::map<char,int>::iterator it;
     /* for (it =freq.begin(); it!=freq.end(); ++it)
    cout << it->first << " => " << it->second << '\n';*/
    while(q--)
    {
        ctr=0;
        char c;
        int al,b;
        cin>>c>>al>>b;
            for(int j=al-1 ; j <= b-1; j++)
                {
                    //freq[a[j]]++;
                    if( a[j]== c)
                    {
                        ctr++;
                    }
            }
            cout<<ctr;
            ctr = 0;
    //cout<<freq[c];
    //freq.clear();
    }
    return 0;
}
