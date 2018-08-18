#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
#define MAX 100

int main()
{
    int a[MAX];
    int n;
    cout<<"Enter the no. of elements in array \n";
    cin>>n;
    int i;
    for(i = 0; i < n ; i++)
    {
        cin>>a[i];
    }

    int j;
    int key;
    clock_t tStart = clock();
    for(i = 1 ; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while((a[j] > key) && (j >= 0)  )
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
         a[j + 1] = key;
        }
cout<<"Sorted array is \n";
   for(i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }

        printf("Time taken : %.2fs\n", (double)(clock() - tStart)/ CLOCKS_PER_SEC);
        return 0;
    }



