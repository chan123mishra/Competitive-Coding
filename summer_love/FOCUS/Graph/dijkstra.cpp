#include<bits/stdc++.h>
using namespace std;
struct Compare
{
    bool operator() (pair<int,int> const &a, pair<int,int> const &b) { return a.second > b.second; }
};
template<typename T> void print_queue(T& q) {
    while(!q.empty()) {


        std::cout <<q.top().first  << " with freq =  "<<q.top().second<<endl;
        q.pop();
    }
    std::cout << '\n';
}
int adj[100][100];
int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;

    memset(adj,0,sizeof(adj[0][0])*n*n);
    vector<int>dist(n,INT_MAX);
    vector<int>parent(n,-1);
//    memset(dist,INT_MAX,sizeof(dist));
   // memset(parent,-1,sizeof(parent));
    int src,dest;
    int key;
    for(int i = 0; i < e; i++)
    {
        cin>>src;
        cin>>dest;
        cin>>key;
        adj[src][dest] = key;
    }
    priority_queue<pair<int,int>,vector<pair<int,int> >, greater<pair<int,int> > > pq;

    pq.push(make_pair(0,0));
    //print_queue(pq);
    dist[0] = 0;
    int k = 1;
    while(k < n || !pq.empty())
    {
        k++;
        //cout<<"Ïnside queue\n";
        int v = pq.top().second;
        //cout<<"vert = "<<v<<endl;

        //dist[v] = pq.top().first;
        pq.pop();
        for(int i = 0; i < n; i++)
        {
            if(adj[v][i] != 0)
            {

                if(dist[i] > dist[v] + adj[v][i])
                {
                    //cout<<"COndition satisfied hai\n";
                    dist[i] = dist[v] + adj[v][i];
                    //cout<<"dist["<<i<<"] = "<<dist[i]<<endl;
                    pq.push(make_pair(dist[i],i));
                }
            }
        }

    }

    for(int i = 0; i < n; i++)
        cout<<dist[i]<<" ";
    cout<<endl;
    return 0;

}
