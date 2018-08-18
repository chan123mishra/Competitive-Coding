#include<bits/stdc++.h>
using namespace std;

set<int>fact(int num) {
    set<int>s;
    int square_root = (int) sqrt(num) + 1;

    for (int i = 1; i < square_root; i++) {
        if (num % i == 0) {
            s.insert(i);
            s.insert(num/i);
        }

    }

   // set<int>::iterator it;
 /*   cout<<"NUM = "<<num<<"\t\t";
    for(it = s.begin(); it != s.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
*/
    return s;
}

int main() {
    int n;
    long long a[100007];
    bool check[100007];
    int inp[100007];

    memset(check,false,100007);
    cin>>n;

    for(int i = 0; i < n; i++) {
        int ele;
        cin>>ele;

        inp[i] = ele;
        check[ele] = true;
        a[ele] = 1;
    }
    sort(inp,inp+n);

    for(int i = 1; i < n; i++) {
        set<int>temp;
        temp = fact(inp[i]);
        set<int>::iterator it;

        for(it = temp.begin(); it != temp.end(); it++) {
            if (((inp[i]/(*it) ) > (*it))) {
                if(check[*it] && check[inp[i]/(*it)] ) {
				//	printf("n = %d\tf1 = %d\tf2 = %d\n", inp[i], (*it), (inp[i] / (*it)));
                    a[inp[i]] += a[*it] * a[inp[i]/(*it)] * 2;
                }
            } else {
                break;
            }
        }

        float fvar = sqrt(inp[i]);
        int var = (int) fvar;
        if((fvar == var) && check[var]) {
            a[inp[i]] += a[var]*a[var];
        }

    }
//set<int>res;
//res = fact(n);
	long long sum = 0;
    for(int i = 0; i < n; i++) {

       // cout<<inp[i]<<" ---> "<<a[inp[i]]<<endl;
       sum = (sum + a[inp[i]])% 1000000009;

    }
    cout<<sum<<endl;
    return 0;
}
