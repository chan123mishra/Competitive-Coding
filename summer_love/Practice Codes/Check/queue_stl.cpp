#include<bits/stdc++.h>
using namespace std;
//vector< vector<int> >a;
//vector<vector<int> >dist;
//vector<int>goal;
//void dijkstra(vector< <int> >);

class Search_sol
{
public:
int distFnc(int x,int y,int z)
{
   return sqrt((x - y)*(x - y) + (x-z)*(x-z));
}
void displayQue(queue<pair<pair<int, int>, double> >q)
{
    while(!q.empty())
    {
       pair<pair<int,int>,double>pr=q.front();
		int i = pr.first.first;
		int j = pr.first.second;
		int z = pr.second;

		cout<<i<<" "<<j<<" time taken-> "<<z<<endl;
    }
}
void search_loc(vector< vector<int> >a,vector< vector<int> >dist,int m, int n,int sx,int sy)
{
queue<pair<pair<int, int>, double> > timeQue;
timeQue.push(make_pair(make_pair(sx, sy), 0));

    while (!timeQue.empty()) {
		pair<pair<int,int>,double>pr=timeQue.front();
		int i = pr.first.first;
		int j = pr.first.second;
		dist[i][j] = pr.second;
		cout<<i<<" "<<j<<" time taken-> ";
		cout<<dist[i][j]<<endl;
		//timeQue.pop();

    if (i+1 < m && (a[i+1][j] != -1) && (dist[i][j] + (1/2)*abs(a[i][j] - a[i + 1][j])) < dist[i+1][j]) {
			dist[i+1][j] = dist[i][j] + (1/2)*abs(a[i][j] - a[i + 1][j]);
			timeQue.push(make_pair(make_pair(i+1, j), dist[i+1][j]));
		}
		if ((i+1 < m) && (j+1 < n) && (a[i+1][j+1] != -1 )&& (dist[i][j] + distFnc(a[i][j],a[i][j + 1],a[i + 1][j]) ) < dist[i+1][j+1]){
			dist[i+1][j+1] = dist[i][j] + distFnc(a[i][j],a[i][j + 1],a[i + 1][j]);
			timeQue.push(make_pair(make_pair(i+1, j+1), dist[i+1][j+1]));
		}
		if (i+1 < m && j-1 >= 0 && (dist[i][j] + distFnc(a[i][j],a[i][j-1],a[i+1][j]) < dist[i+1][j-1]) && a[i+1][j-1] != -1) {
			dist[i+1][j-1] = dist[i][j] + distFnc(a[i][j],a[i][j-1],a[i+1][j]) < dist[i+1][j-1];
			timeQue.push(make_pair(make_pair(i+1, j-1), dist[i+1][j-1]));
		}
		if ((j+1 < n) && (a[i][j+1] != -1) && (dist[i][j] + abs(a[i][j + 1] - a[i][j]) < dist[i][j+1])) {
			dist[i][j+1] = dist[i][j] + abs(a[i][j + 1] - a[i][j]);
			timeQue.push(make_pair(make_pair(i, j+1), dist[i][j+1]));
		}

		if (j-1 >= 0 && (dist[i][j] + abs(dist[i][j] - dist[i][j - 1]) < dist[i][j-1]) && a[i][j-1] != -1) {
			dist[i][j-1] = dist[i][j] + abs(dist[i][j] - dist[i][j - 1]);
			timeQue.push(make_pair(make_pair(i, j-1), dist[i][j-1]));
		}

		if (j-1 >= 0 && i-1 >= 0 && a[i-1][j-1] != -1 && (dist[i][j] + distFnc(a[i][j], a[i][j-1],a[i][j-1]) < dist[i-1][j-1])) {
			dist[i-1][j-1] = dist[i][j] + distFnc(a[i][j], a[i][j-1],a[i][j-1]);
			timeQue.push(make_pair(make_pair(i-1, j-1), dist[i-1][j-1]));
		}
			if (i-1 >= 0 && j+1 < n && a[i-1][j+1] == 0 && (dist[i][j] + distFnc(a[i][j],a[i][j+1],a[i -1][j]) < dist[i-1][j+1])) {
			dist[i-1][j+1] = dist[i][j] + distFnc(a[i][j],a[i][j+1],a[i -1][j]);
			timeQue.push(make_pair(make_pair(i-1, j+1), dist[i-1][j+1]));
		}

		if (i-1 >= 0 && a[i-1][j] != -1 && (dist[i][j] + 2*abs(a[i][j] - a[i-1][j]) < dist[i-1][j])) {
			dist[i-1][j] = dist[i][j] + 2*abs(a[i][j] - a[i-1][j]);
			timeQue.push(make_pair(make_pair(i-1, j), dist[i-1][j]));
		}


    }
    //displayQue(timeQue);
}
};
class Display
{

public :
    void display(	vector< vector<int> >a,int m,int n)
    {
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
};
int main()
{
	int m,n;
	cin>>m>>n;
	vector< vector<int> >a;
	  vector<vector<int> >dist;
	vector<int>pushpa;
	vector<int>pushpa1;

	int i,j;
	int ab;
	Search_sol ob;
	for(i = 0; i < m ; i++)
	{
		pushpa.clear();
		for(j = 0; j < n; j++)
		{
			cin>>ab;
			pushpa.push_back(ab);
		}
		a.push_back(pushpa);
	}
Display ob1 ;
ob1.display(a,m,n);

	/*for(i = 0; i < m ; i++)
	  {
	  for(j = 0; j < n; j++)
	  {
	  cout<<v[i][j]<<" ";
	//v.push_back(a);
	}
	cout<<"\n";
	}*/
	int sx,sy,dx,dy;
	//int val = 0;

		cin>>sx;
		cin>>sy;
		cin>>dx;
		cin>>dy;
		//dist[sx][sy] = 0;
		//dist[sx][sy] = 0;
		//for(i = 0; i < m; i++)
	for(i = 0; i < m ; i++)
	{
		pushpa1.clear();
		for(j = 0; j < n; j++)
		{
			pushpa1.push_back(999);
		}
		dist.push_back(pushpa1);
	}
	ob1.display(dist,m,n);
		dist[sx][sy] = 0;
        //ob1.display(a,dist,m,n);
		ob.search_loc(a,dist,m,n,sx,sy);
		/*	for(i = 0; i < goal.sxze(); i++)
			cout<<goal[i];*/

	return 0;
}
