#include<bits/stdc++.h>
using namespace std;
int searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m = A.size();
    if(m == 1)
    {
        if(A[0][0] == B)
        return 1;
        else
        return 0;
    }
    int n = A[0].size();
    int i = 0;
    int j = n-1;
    int flag = 0;
    while(i < m && j >= 0)
    {
         cout<<"i = "<<i<<" , j = "<<j<<endl;
        if(A[i][j] == B)
        {
            flag = 1;
            return 1;
        }
        else if(A[i][j] > B)
        {
            if(binary_search(A[i].begin(),A[i].end(),B))
            {
                flag = 1;
                return 1;
            }
            else
            return 0;
        }
        else
        {
            i++;
        }
    }


        cout<<"i = "<<i<<" , j = "<<j<<endl;
        return 0;

}
/*
7 5
3 3 11 12 14 16 17 30 34 35 5 48 49 50 52 56 59 63 63 65 67 71 72 73 79 80 84 85 85 88 88 91 92 93 94 94
*/
int main()
{
    vector<vector<int> >vec;
    int m,n;
    cin>>m>>n;
    for(int i = 0; i < m; i++)
    {
        vector<int>temp;
        for(int j = 0; j < n; j++)
        {
            int ele;
            cin>>ele;
            temp.push_back(ele);
        }
        vec.push_back(temp);
    }
    int b;
    cin>>b;
    cout<<searchMatrix(vec,b)<<endl;
    return 0;
}
