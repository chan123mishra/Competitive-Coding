#include<bits/stdc++.h>
using namespace std;
bool flag = false;
void kmpsearch(char text[],char pattern[],int m,int n,int lps[])
{
    int i,j;
    i = 0;
    j = 0;
    while(i < m)
    {
       // cout<<"here comes the shit"<<endl;
       if(text[i] == pattern[j])
       {
           i++;
           j++;
        if(j == n)
       {
           flag = true;
           cout<<"Pattern found at i = "<<i-n<<endl;
           j = lps[j-1];
           continue;
       }
       }

       else if(text[i] != pattern[j])
       {
           if(j == 0)
           {
               i++;
           }
           else
            j = lps[j-1];
       }
    }
}
int main()
{
     char text[100];
    char pattern[100];
    /*
    fgets(text,sizeof(text),stdin);
    fgets(pattern,sizeof(pattern),stdin);
    */
    cin.getline(text,sizeof(text));
    cin.getline(pattern,sizeof(pattern));
    int m = strlen(text);
    int n = strlen(pattern);

    int lps[n];
    lps[0] = 0;
    int j = 0;
    int i = 1;
    for(; i < n;)
    {
        if(pattern[j] == pattern[i])
        {
            lps[i] = j + 1;
            j++;
            i++;
        }
        else
        {
            if(j == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }

    cout<<"LPS array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<lps[i]<<" ";
    }
    cout<<endl;
    kmpsearch(text,pattern,m,n,lps);
    if(flag == false)
        cout<<"Pattern not found"<<endl;

    return 0;

}
