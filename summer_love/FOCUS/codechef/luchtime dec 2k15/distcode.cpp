//SUBMITTED IN JAVA, THis CODE DOESNT WORK :(
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
map<string,int>mp;
while(t--)
{
long ctr = 0;
 char *a;
cin>>a;
long n = strlen(a);
long i,j;
for( i = 0; i < n - 1; i ++)
{
    //cout<<"Loop i"<<endl;
for ( j = i;  j < i + 2 ; j++)
{
    //cout<<"Loop j, i = " + 2<<i<<" and j = "<<j<<endl;
if (islower(a[j])){
       // cout<<"lower char found at ind "<<i<<endl;
break;
}
string str1 = a[i];
string str2 = a[j];
string str = strcat(str1,str2;
if((mp.find(str)->second != 1 && j == i+ 1)
{
mp.insert(pair<string,int>(str),1 ));
ctr++;
}

}
//ctr++;
}
cout<<ctr<<endl;
}
return 0;
}
