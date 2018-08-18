#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
/*inline void fastRead_int(int &x) {

	    register int c = getchar_unlocked();

	    x = 0;
	    int neg = 0;



	    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());



	    if(c=='-') {

	        neg = 1;

	        c = getchar_unlocked();

	    }



	    for(; c>47 && c<58 ; c = getchar_unlocked()) {

	        x = (x<<1) + (x<<3) + c - 48;

	    }



	    if(neg)

	        x = -x;

	}*/
void dec(long long *m, long long *n1,long long *n2)
{
   /*    return;

        (*m)--;
    dec(m,n1,n2);
    */
    *m = min(*n1,*n2);

}
int main()
{
    int t;
    scanf("%d",&t);
    //fastRead_int(t);
    long long n1,n2,m;
    long long c;

    while(t--)
    {
        scanf("%lld %lld %lld",&n1,&n2,&m);

        if(m > n1 || m > n2)
            {
               m = min(n1,n2);
               cout<<(n1 + n2) - 2*m;
                return 0;
            }
/*
            int n = m * (m + 1)/2;
            if((n1 + n2) < n )
                cout<<"0"<<endl;
            int sum = (n1 + n2) - 2*n;

            cout<<sum<<endl;
            */
       for(long long i = 1; i <= m; i++)
        {
            if(i > n1 || i > n2)
            {
                i = min(n1,n2);
               // return 0;

            }


            if(n1 == 0 || n2 == 0)
                break;

            n1 = n1 - i;
            n2 = n2 - i;
        //    cout<<"After taking out "<<m<<" stones, n1 = "<<n1<<" and n2 = "<<n2<<endl;
        }
          cout<<n1+n2<<endl;
      //  cout<<"finally sum of stones left = "<<n1+n2<<endl;
    }

    return 0;
}
/*
inline void fastRead_int(int &x) {

	    register int c = getchar_unlocked();

	    x = 0;
	    int neg = 0;



	    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());



	    if(c=='-') {

	        neg = 1;

	        c = getchar_unlocked();

	    }



	    for(; c>47 && c<58 ; c = getchar_unlocked()) {

	        x = (x<<1) + (x<<3) + c - 48;

	    }



	    if(neg)

	        x = -x;

	}
	*/
