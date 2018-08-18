#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    long long int e , o , x;
    cin>>t;
    int i;
    for(i = 0 ; i < t; i++ ){
        scanf("%lld", &e);
        scanf("%lld", &o);

        x = ((2 * o) - (3 * e));
        if(x % 5 == 0 )
        {
            printf("%lld \n", abs(x / 5));
        }
        else
            printf("%d \n",-1);
    }
    return 0;
}
