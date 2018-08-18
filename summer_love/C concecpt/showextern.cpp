
#include<iostream>
#include "extern_use.cpp"
using namespace std;
extern void showMagic();
 int main()
{

	//extern int a;
	//cout<<a<<endl;
	showMagic();
	return 0;
}
