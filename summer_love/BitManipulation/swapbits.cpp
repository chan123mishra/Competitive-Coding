#include <bits/stdc++.h>
using namespace std;
namespace std {
    template<>
    void swap<bitset<64>::reference>(
        bitset<64>::reference &left,
        bitset<64>::reference &right
    ) {
        bool temp = (bool)left;
        left = (bool)right;
        right = (bool)temp;
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int p1,p2;
	    cin>>p1>>p2;
	    int k;
	    cin>>k;
	    bitset<64>b(n);
	    int i = 1;
	    while(i<=k)
	    {
	       swap(b[p1+i],b[p2+i]);
	        i++;
	    }
	    cout<<b.to_ulong()<<endl;
	}
	return 0;
}
