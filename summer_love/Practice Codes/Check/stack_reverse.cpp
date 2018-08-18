#include<bits/stdc++.h>
using namespace std;
int top = -1;
void push_stack(char stak[], char n);
char pop(char stak[]);
int main()
{
char a[100];
char stak[100];
cin>>a;
for(int i = 0; i < strlen(a); i++)
{
push_stack(stak,a[i]);
}
for(int i = 0; i < strlen(a); i++)
{
cout<<pop(stak);
}
return 0;
}

void push_stack(char stak[],char a)
{
if(top == strlen(stak))
{
cout<<"OVERFLOW\n";
return;
}

stak[++top] = a;
}
char pop(char stak[])
{
if(top == -1)
{
cout<<"EMpty\n";
exit(1);
}

return stak[top--];
}


