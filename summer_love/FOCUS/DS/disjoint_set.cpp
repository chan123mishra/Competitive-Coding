#include<bits/stdc++.h>

using namespace std;

int find_par(int parent[],int x)

{

if(parent[x] != x)
{

return find_par(parent,parent[x]);

}

return parent[x];

}

void makeunion(int parent[], int length[], int x, int y)

{

int x_par = find_par(parent,x);

int y_par = find_par(parent,y);

if(length[x_par] >= length[y_par])

{

parent[y_par] = x_par;

length[x_par] += length[y_par];

length[y_par] = 0;

}

else

{

parent[x_par] = y_par;

length[y_par] += length[x_par];

length[x_par] = 0;

}



}

int main()

{

int n;

cin>>n;

int parent[2*n + 1];

int length[2*n + 1];

//int rank[2*n + 1];



for(int i = 1; i <= 2*n; i++)

{

parent[i] = i;

length[i] = 1;

}







int x,y;

for(int i = 1; i <= n; i++)

{

cin>>x>>y;

if(find_par(parent,x) != find_par(parent,y))

{

makeunion(parent,length,x,y);

}

}



sort(length + 1, length + (2*n + 1));



//cout<<"length array"<<endl;

for(int i = 1; i <= 2 * n; i++)

{

//­cout<<length[i]<<" ";

if((length[i] > 1) && i != 2*n)

{

cout<<length[i]<<" ";

break;

}

}



cout<<length[2*n]<<endl;

// cout<<endl;



return 0;
}
