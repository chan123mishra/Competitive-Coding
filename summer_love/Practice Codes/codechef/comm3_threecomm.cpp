#include<bits/stdc++.h>
using namespace std;
double dis(int x1,int y1,int x2, int y2)
{
    return sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
}

int main(void)
{
    int t;
    cin>>t;
    int r;
    while(t--)
    {
        cin>>r;
        vector<int>x(r);
        vector<int>y(r);

        for(int i = 0; i < 3; i++)
        {
            cin>>x[i];
            cin>>y[i];
        }

        double dist[3];
        int k = 0;
     /*   for(int i = 0; i < 2 ; i++)
        {
            dist[k++] = dis(x[i],y[i],x[i+1],y[i+1]);
        }
        */

        dist[0] = dis(x[0],y[0],x[1],y[1]);
        dist[1] = dis(x[1],y[1],x[2],y[2]);
        dist[2] = dis(x[0],y[0],x[2],y[2]);

        int ctr = 0;
        for(int i = 0; i < 3; i++)
        {
            //cout<<" dist "<<i<<" = "<<dist[i]<<endl;
            if((double)r >= dist[i])
                ctr++;
        }

        if(ctr == 3 || ctr == 2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

        x.clear();
        y.clear();
   // cout<<"dist 0 "<<dist[0]<<endl;
    //cout<<"dist 1 "<<dist[0]<<endl;
       // sort(dist,dist+k);
        //if(r >= dist[k - 1])
           // cout<<"yes"<<endl;

            //else
               // cout<<"no"<<endl;
    }
    return 0;
}
