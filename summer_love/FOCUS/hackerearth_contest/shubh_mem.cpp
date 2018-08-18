#include <bits/stdc++.h>
using namespace std;
 // int h[100][100];
/*void init( )
{
    for(int i = 0; i < 100; i++)
    {

        for(int j =0 ;j <100;j++)
    {
        h[i][j] = 0;
    }
    }
}*/
int power(int a,int b)
{
    if(b == 0) {
        return 1;
    }
    int p =1;
    for(int i = 0; i <= b; i++) {
        p *= a;
    }
    return p;
}
int main()
{
    int n;
    int t;
    int i;
    int h[100][100];
    vector<int> v;
    int x;
    int y;
    int j;
    int k;
    int p;
    int ctr;
    int l;

    cin>>t;
    for(int i = 0; i < t; i++) {
        scanf("%d",&n);
        scanf("%d",&p);
        //init();
        memset(h,0,sizeof(h));
        for(i = 0; i < p; i++) {
            scanf("%d",&x);
            scanf("%d",&y);
            h[x][y] = 1;
            h[y][x] = 1;
        }
        ctr = 0;
        int flag = 0;
        int l = pow(2,n);
        for(i = 1; i < l; i++) {
            v.clear();
            for(j = 0; j < n; j++) {
                if(i&(1<<j)) {
                    v.push_back(j+1);
                }
            }
            /*for(j = 0; j < v.size(); j++) {
                cout<<v[j]<<' ';
            }*/
            //cout<<endl;
            flag = 0;
            for(j = 0; j < v.size(); j++) {
                for(k = j+1; k < v.size(); k++) {
                    if(h[v[j]][v[k]] == 1) {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0) {
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }
}
