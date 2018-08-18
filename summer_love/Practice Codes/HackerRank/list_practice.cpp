#include<iostream>

using namespace std;
void imp(int *, int *);
int main()
{
    int i,j;
    i = 0;
    j = 1;

    cout<<i<<" "<<j<<endl;;
    imp(&i,&j);
    cout<<i<<" "<<j;
    return 0;
}
void imp(int *a, int *b)
{
    (*a)++;
    (*b)++;
}
