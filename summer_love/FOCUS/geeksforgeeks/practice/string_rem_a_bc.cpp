#include<bits/stdc++.h>
using namespace std;

void removeSubstrs(string &s,const string &p) {
   int n = p.length();

   for (int i = s.find(p);
        i != s.length();
        i = s.find(p))
      s.erase(i, n);
}
int main()
{

    int t;
    cin>>t;
   //string a;
    char a[300];
    while(t--)
    {
           cin>>a;
           char res[300];
           int j = 0;
           memset(res,'0',sizeof(res));
           for(int i = 0; i < strlen(a); i++)
           {
                if((a[i] == 'a' && a[i + 1] == 'c') )
                {
                    i++;
                    continue;
                }
                else if(a[i] == 'b')
                {
                    continue;
                }
                res[j++] = a[i];
           }
           for(int i = 0; i < j; i++)
           {
               cout<<res[i];
           }
           cout<<endl;
           /*
           int bpos;
           int acpos;
           bpos = a.find("b");
           cout<<"Pos of b = "<<bpos<<endl;
           while( bpos <a.length() && bpos != std::string::npos)
            {
                a.erase(bpos);
                bpos = a.find("b");
                 cout<<"Pos of b = "<<bpos<<endl;
            }
            acpos = a.find("ac");
             cout<<"Pos of ac = "<<acpos<<endl;
            while(acpos <a.length() && acpos != std::string::npos)
            {
                a.erase(acpos,2);
                bpos = a.find("ac");
                 cout<<"Pos of ac = "<<acpos<<endl;
            }
            */
       //    cout<<a<<endl;
    }
    return 0;
}
