#include<iostream>
using namespace std;
int top = 0;
#define MAX 10
void push(int i, int a[])
{

if(top == MAX - 1)
{
cout<<"Stack Overflow";
}

a[top++] = i;

}
int pop(int a[])
{
if(top == -1)
{
cout<<"Stack is empty";
}
int b = a[top--];
return b;
}

int peek(int a[])
{
if(top == -1)
{
cout<<"Stack is empty";
}
int b = a[top];
return b;
}

void traverse(int a[])
{
cout<<"Elements in the stack are \n";
for(int i = 0; i < top; i++)
{
cout<<a[i]<<endl;
}
}
int main()
{
int ab[10];
int n;

int i;
int a;
while(1)
{
    cout<<"Enter the choice \n";
cout<<"1- for push . 2- for pop . 3- peek . 4- traverse \n";
cin>>n;
switch(n)
{
case 1 :
    cout<<"Enter the value to be pushed in the stack \n";
    cin>>i;
    push(i,ab);
    break;

case 2 :
    a = pop(ab);
    cout<<"Popped out value is  "<<a;
    break;

case 3:
    a = peek(ab);
    cout<<"Top most element is"<<a;
    break;
case 4:
    traverse(ab);
    break;
default :
    break;
    }
}

return 0;
}

