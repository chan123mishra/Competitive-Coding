#include<bits/stdc++.h>
using namespace std;
int hash_fnc(char a[], int ll,int hh, int p)
{
    int h = 0;
    for(int i = ll; i < hh; i++)
    {
        h = h + (int)a[i]*pow(p,i);
    }
    return h;
}
int main()
{
    char text[100];
    char pattern[100];
    /*
    fgets(text,sizeof(text),stdin);
    fgets(pattern,sizeof(pattern),stdin);
    */
    cin.getline(text,sizeof(text));
    cin.getline(pattern,sizeof(pattern));
    int m = strlen(text);
    int n = strlen(pattern);
    int p = 101;
    int h_pat = hash_fnc(pattern,0,n,p);
    int ht = hash_fnc(text,0,n,p);
    bool flag = false;
    int i, j;
    for( i = 0; i <= m - n; i++)
    {
        if(ht == h_pat)
        {
            for( j = 0; j < n; j++)
            {
                if(text[i+j] != pattern[j])
                {
                    break;
                }
            }
            if(j == n)
            {
                cout<<"Pattern found at "<<i<<" pos"<<endl;
                flag = true;
            }
        }
        else{
            ht = ((ht - (int)text[i])/p) + (int)text[i+1] * pow(p,n-1);
        }
    }

    if(flag == false)
    {
        cout<<"Pattern not found"<<endl;
    }
    return 0;
}
