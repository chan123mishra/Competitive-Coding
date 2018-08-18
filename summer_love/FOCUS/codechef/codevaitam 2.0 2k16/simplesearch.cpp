#include<bits/stdc++.h>
using namespace std;
float a[1000000];

int binry_search(float a[], int l, int h, float ele, int n) {
    while(l <= h) {
        int m = (l + h)/2;
        if(a[m] == ele)
            return m;
        else if(a[m] > ele) {
            h = m - 1;
        } else {
            l = m + 1;
        }
        //return binry_search(a,m+1,h,ele,n);
    }
    if(ele > a[l] )
        return l;
    else
        return h;
}
int main() {
    int t;
    int ind;
    int n,k,i;
    float ele;

    scanf("%d",&t);
    while(t--) {
//cin>>n>>k;
        scanf("%d",&n);
        scanf("%d",&k);

        for( i = 0; i < n; i++)
            scanf("%f",&a[i]);

        sort(a,a+n);
        for( i = 0; i < k; i++) {
//cin>>ele;
            scanf("%f",&ele);

            if(ele > a[n - 1])
                printf("0\n");
            else if(ele < a[0])
                printf("%d\n",n);

            ind = binry_search(a,0,n-1,ele,n);

            printf("%d\n",(n - 1 - ind));
        }

    }
    return 0;
}
//cout<<ind<<ele;

