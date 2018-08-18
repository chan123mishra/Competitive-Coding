#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double bal;
int am;
cin>>am;
cin>>bal;
if((((double)am + 0.50)<= bal) && (am % 5 == 0 )  )
{
bal = (bal - (double)am )- 0.50 ;
cout<<fixed << setprecision(2) << bal;
}

else
{
cout<<fixed << setprecision(2) << bal;
}
return 0;

}
