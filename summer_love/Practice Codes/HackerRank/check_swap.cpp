#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
int a = 2;
int b = 3;
cout<<a<<" "<<b<<endl;
swap(&a,&b);
cout<<a<<" "<<b;
return 0;
}
void swap(int *a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
