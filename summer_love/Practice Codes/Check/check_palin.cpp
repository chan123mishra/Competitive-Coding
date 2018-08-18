#include<bits/stdc++.h>
using namespace std;
int weight = 1;
int reverseDigit(int num){
int reverseNum = 0, reminder;
if(num/10 == 0){
return num;
}else{
reminder = num%10;
reverseNum = reverseDigit(num/10);
weight *= 10;
return reminder*weight + reverseNum;
}
}
bool isPalindrome(int num){
if(reverseDigit(num)== num)
cout<<"YEp";
else
cout<<"Nope";
}
int main()
{
int n;
cin>>n;
isPalindrome(n);
return 0;
}
