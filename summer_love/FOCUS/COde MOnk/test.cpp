
#include<bits/stdc++.h>

//yellow flash of the leaf

using namespace std;

int main()
{

    long long int n;
    int t;
    cin >> t;
    long long int ans = 0;
    long long int ans1 = 0;
    while(t--)
    {
        cin >> n;
        ans = 0;
        while( n >= 1)
        {
            ans1 = 0;
            ans1 = n / 5;
            //cout << ans1 << endl;
            n = n / 5;
            ans = ans + ans1 ;
            //cout << ans << endl;
            //cout << n << endl;

        }
        cout << ans << endl;
    }
    return 0;
}
