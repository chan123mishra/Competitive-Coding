#include<bits/stdc++.h>
using namespace std;

/*void insert(int a[], int n)
{

        int temp = a[n];
        int j;
        for(j = n-1; j >= 0; j--)
        {
            if(temp < a[j])
                a[j+1] = a[j];
        }
        cout<<"j = "<<j<<endl;
        a[j+1] = temp;

}
*/
void insertionSort(int a[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      {
          //insert(arr, i);
          int temp = a[i];
        int j;
        for(j = i-1; j >= 0; j--)
        {
            if(temp < a[j])
                a[j+1] = a[j];
            else
                break;
        }
        cout<<"j = "<<j<<endl;
        a[j+1] = temp;
      }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    insertionSort(a,n);
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
    }

    return 0;

}
