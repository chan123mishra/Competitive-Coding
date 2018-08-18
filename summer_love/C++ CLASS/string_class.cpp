#include<bits/stdc++.h>
using namespace std;
class nigga
{
public:
    void concat(string &str1, string &str2)
    {
        str1 = str1 + str2;
    }
    void reverse_str(string &str)
    {
        int l = 0;
        int h = str.length() - 1;
        while(l < h)
        {
            swap(str[l],str[h]);
            l++;
            h--;
        }
    }
};

int main()
{

    string str1, str2;
    cin>>str1;
    cin>>str2;
    nigga ob1,ob2;
    ob1.concat(str1,str2);
    ob1.reverse_str(str1);
    cout<<str1<<endl;
    return 0;
}
