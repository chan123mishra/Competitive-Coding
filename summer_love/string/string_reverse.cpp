#include<bits/stdc++.h>
using namespace std;
void reverse_str(char *str, int l, int h)
{
    while(l < h)
    {
        swap(*(str+l),*(str+h));
        l++;
        h--;
    }

}
int main()
{
    char str[100];
    cin>>str;
    int n;
    n = strlen(str);
   //str = (char*)calloc(sizeof(char),5);
    reverse_str(str,0,n-1);
    cout<<str<<endl;

}
