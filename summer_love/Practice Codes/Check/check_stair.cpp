#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int i, j;
    for(i = 0; i < 6; i++)
        {
        for(j = 0; j < 6; j++)
            {
            if(j >= 5 - i)
            cout<<"#";
        else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
