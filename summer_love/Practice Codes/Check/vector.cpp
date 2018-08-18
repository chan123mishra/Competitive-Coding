#include<bits/stdc++.h>
using namespace std;
//using namespace std;
void display(vector<int>A)
{
    for(int i = 0; i < A.size(); i++)
        cout<<A[i]<<endl;
    cout<<endl;
}
void fnc(vector<int>&a)
{
    display(a);
}
vector<int> maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   // display(A);
    long long int maxsum = INT_MIN;
    long long int cursum = 0;
    vector<int>::iterator it;
    vector<int>res;
    vector<int>curarr;
    long long int minsum = INT_MAX;
    long long int minSize = INT_MAX;
    long long int curSize = 0;
    for(it = A.begin(); it != A.end(); it++)
    {
        if((*it) < 0)
        {
            if(cursum > maxsum)
            {
                res.swap(curarr);
                maxsum = cursum;
                cursum = 0;
                //curarr.clear();
            }
            else if(cursum == maxsum)
            {
                if(curarr.size() < minSize)
                {
                    minSize = curarr.size();
                    res.swap(curarr);

                }
            }

            curarr.clear();

        }
        else
        {
        cursum = cursum + (*it);
        curarr.push_back((*it));
        //curSize++;


    }


}

if(cursum > maxsum)
{
    cout<<cursum<<"<-cursum and "<<maxsum<<"<-maxsum"<<endl;
    res.swap(curarr);
}

return res;
}
int main()
{
    vector<int>a;
    int n;
    cin>>n;
    int ele;
    for(int i = 0;i < n; i++)
    {
        cin>>ele;
        a.push_back(ele);
    }
   // display(a);
    vector<int>res;
    vector<int>::iterator it;
   // res.swap(maxset(a));
    res = maxset(a);
    for(it = res.begin(); it != res.end(); it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;

    return 0;


}
