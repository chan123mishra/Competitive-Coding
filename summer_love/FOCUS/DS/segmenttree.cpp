#include<bits/stdc++.h>
using namespace std;
int power[100000];
void powerinit()
{
    power[0] = 1;
    power[1] = 2;
    for(int i = 2; i < 1e6; i++)
    {
        power[i] = (power[i - 1] * 2) % 3;
    }
}
int query(int seg[], int l, int r, int ql, int qr,int pos)
{
    if(l >= ql && r <= qr)
    {
        return seg[pos];
    }

    if(l > qr || r < ql)
    {
        return 0;
    }

    int mid = (l + r)/2;
    return (power[r - mid] * query(seg,l,mid,ql,qr,2*pos+1) + query(seg,mid+1,r,ql,qr,2*pos+2))%3;
}
void constructseg(int a[], int seg[], int l, int h, int pos)
{
    if(l == h)
    {
        seg[pos] = a[l];
        return;
    }

    int mid = (l + h)/2;
     constructseg(a,seg,l,mid,2*pos+1);
     constructseg(a,seg,mid+1,h,2*pos+2);

     seg[pos] = (((seg[2*pos+1] * power[l - mid] )% 3) + seg[2*pos+2])%3;
}

/*void updateseg(int seg[], int l, int h, int upval, int upind, int pos )
{
    if(upind < l || upind > h)
    {
        return;
    }

    seg[pos] = seg[pos] + upval;
    if(l != h)
    {
        int mid = (l + h) / 2;
        updateseg(seg,l,mid,upval,upind,2*pos+1);
        updateseg(seg,mid+1,h,upval,upind,2*pos+2);
    }
}*/
void updateseg(int seg[],int pos, int l, int h, int a[], int value, int i) {
		if(l == h) {
			seg[pos] = value;			//Will be called only once
			a[i] = value;
			return;
		}

		int mid = (l+h)/ 2;
		if(l <= i && i <= mid) {
			updateseg(seg,2 *pos+1, l, mid, a, value, i);
		} else {
			updateseg(seg,2 * pos + 2, mid + 1, h, a, value, i);
		}

		seg[pos] = (((seg[2*pos+1] * power[l - mid] )% 3) + seg[2*pos+2])%3;	//sum of both childs
	}
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int s = 2 * pow(2,ceil(log2(n))) - 1;
    memset(power,0,sizeof(power));
    powerinit();

    //cout<<s<<endl;
    int seg[s];;
    memset(seg,0,sizeof(seg));
    constructseg(a,seg,0,n-1,0);
    cout<<endl;
    for(int i = 0; i < s; i++)
    {
        cout<<seg[i]<<" ";
    }
    cout<<endl;
  cout<<"Sum for 0 to 2nd index is = "<<query(seg,0,n-1,0,2,0);
   cout<<"Update function :"<<endl;
   cout<<"Update value :\t";
   int upval;
   cin>>upval;
   int upind;
   cout<<endl;
   cout<<"Update index :\t";
   cin>>upind;
   cout<<endl;
   int updiff = upval  - a[upind];
   a[upind] = upval;

   //updateseg(seg, 0, n -1, updiff, upind, 0);
   updateseg(seg,0, 0,  n-1, a,upval,  upind);
   cout<<"Sum for 0 to 2nd index is = "<<query(seg,0,n-1,0,2,0);
    cout<<endl;
}
