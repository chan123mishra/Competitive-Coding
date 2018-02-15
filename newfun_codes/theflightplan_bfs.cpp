#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m,t,c;
        cin>>n>>m>>c>>t;
        vector<int>adj[n+1];
        int s,d;
        for(int i = 0; i < m; i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int time[n+1];
        /*
        1
5 5 3 5
1 2
1 3
2 4
1 4
2 5
1 5
*/

        cin>>s>>d;
        for(int i = 0; i <= n; i++)
            time[i] = 0;
        time[s] = 0;
        int st = 0;
        bool visited[n+1];
       for(int i = 0; i <= n; i++)
       {
           time[i] = 0;
           visited[i] = false;

       }

        queue<int>q;
        q.push(s);
        time[s] = 0;
        while(!q.empty())
        {
            int temp;
            temp = q.front();
            cout<<"Time of curr visited node = "<<time[temp]<<endl;
            q.pop();
            visited[temp] = true;
                if(((time[temp]+t)/c)%2)
                    {
                        st = 1;
                    }
                    else
                    {
                        st = 0;
                    }
            for(int i = 0; i < adj[temp].size(); i++)
            {
                if(!visited[adj[temp][i]])
                {
                   if(st == 1)
                   {
                        time[i] = (((time[temp]+t)/c)+1)*c;
                   }
                   else
                   {
                       time[i] = time[temp]+t;
                   }
                   q.push(adj[temp][i]);
                }
            }

        }

       // cout<<time[d]<<" "<<endl;
    }

    return 0;
}
