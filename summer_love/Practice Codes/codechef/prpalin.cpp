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
int isPalindrome(int num){
if(reverseDigit(num)== num)
return 1;
else
return 0;
}


int main()
{
    unsigned long n;
    unsigned long primelist[10000000];
    cin>>n;
    //isPalindrome(n);
    memset(primelist,1,10000000);
    for(int i = 2; i < 10000000; i++)
        cout<<primelist[i]<<"/n";
    for(int i = 2; i < 10000000 ; i++)
    {
        if((primelist[i] == 1) && (isPalindrome(i) == 1) && (i >= n) )
        {
            cout<<i;
            break;
        }
        for(int j = 2; (j < 10000000) && ((i * j) < 10000000) ;j++)
        {
            primelist[i*j] = 0;
        }
    }
    return 0;
}
