#include<bits/stdc++.h>
using namespace std;
int fact = 0;
void display(char a[], int k)
{
    for(int i = 0; i < k; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void permute(char input[], int freq[], char output[], int k, int l, int m)
{
    if(k == m)
    {
        display(output,k);
        fact++;
        return;
    }

    for(int i = 0; i < l; i++)
    {
        if(freq[input[i] - 'a'] > 0)
        {
            freq[input[i] - 'a']--;
            output[k] = input[i];
            permute(input,freq,output,k+1,l,m);
            freq[input[i] - 'a']++;
        }
    }
}
int main()
{
    char input[10];
    cin>>input;
    int freq[26];
    memset(freq,0,sizeof(freq));
    char disarr[10];
    int k = 0;
    for(int i = 0; i < strlen(input); i++)
    {
        if(freq[input[i] - 'a'] < 1)
        {
            disarr[k++] = input[i];
        }

        freq[input[i] - 'a'] = 1 + freq[input[i] - 'a'];
    }


    char output[10];
    permute(disarr,freq,output,0,k,strlen(input));
    cout<<"Total Permutations = "<<fact<<endl;
    return 0;
}
