
#include<iostream>
using namespace std;
int main()
{
    int dis[2] = {20,20,20};

    int sol = 1000;
    sol = (((sol - (sol * dis[0])/100) - dis[1]*(sol - (sol * dis[0])/100)) - dis[2]*(((sol - (sol * dis[0])/100) - dis[1]*(sol - (sol * dis[0])/100))));
    cout<<sol;
}
