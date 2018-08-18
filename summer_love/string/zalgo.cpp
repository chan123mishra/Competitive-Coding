#include<bits/stdc++.h>
using namespace std;
int main()
{
    char text[100];
    char pattern[200];
    char ch[] = "$";
    //cout<<strlen(ch)<<endl;
   // cin.getline(text,sizeof(text));
    //cin.getline(pattern,sizeof(pattern));
    cin>>text;
    cin>>pattern;
    int p;
    p = strlen(pattern);

    //cout<<p<<endl;
    cout<<"p = "<<strlen(pattern)<<endl;
    char fin_text[200];
    for(int i = 0; i < strlen(pattern);i++)
    {
        fin_text[i] = pattern[i];
    }
   // memcpy(fin_text,pattern,strlen(pattern)+1);
    strcat(ch,text);
//    cout<<"z = "<<z<<endl;
    cout<<ch<<endl;
    strcat(fin_text,ch);
    cout<<"z = "<<strlen(pattern)<<endl;
    cout<<"new pattern = "<<fin_text<<endl;

    int zarry[200];
    int i = 1;
    int j = 0;
    zarry[0] = -1;
    int k ;
    cout<<"z = "<<strlen(pattern)<<endl;
    //cout<<"fintext length = "<<strlen(fin_text)<<endl;
    while(i<strlen(fin_text))
    {
        k = 0;
        j = 0;
        while(fin_text[i + k] == fin_text[j] && i + k < strlen(fin_text))
        {
            k++;
            j++;
            //cout<<"For i = "<<i<<"k = "<<k<<endl;
        }
        zarry[i] = k;
        i++;
    }

    //ut<<"Zarray for pattern\n";
    bool flag = false;
//cout<<"z = "<<z<<endl;
        for(int i = 0; i < strlen(fin_text); i++)
        {
            //cout<<"zarry ["<<i<<"] = "<<zarry[i]<<endl;
            //cout<<"z = "<<z<<endl;
            if(zarry[i] == strlen(pattern))
            {
                cout<<"Pattern found at "<<i-strlen(pattern)-1<<" location in text"<<endl;
                flag = true;
            }
        }

        if(flag == false)
        {
            cout<<"Pattern not found\n";
        }

   //out<<endl;
    return 0;
}
