#include<bits/stdc++.h>
using namespace std;
void toh(int n, char src, char temp,char dest)
{
    if(n == 1)
    {
        cout<<"Move "<<n<<" number disk from "<<src<<" to "<<dest<<endl;
        return;
    }

    toh(n - 1,src,dest,temp);
    cout<<"Move "<<n<<" number disk from "<<src<<" to "<<dest<<endl;
    toh(n - 1,temp,src,dest);

}
int main()
{
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}
