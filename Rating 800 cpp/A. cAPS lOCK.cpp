#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c=0,d=0;
    string str,str1;
    cin>>str;
    str1=str;
    if(str[0]>=97)
        c++;
    else
        d++;
    for(int i=1;i<str.size();i++)
    {
         if(str[i]<97)
         {
           c++;
           d++;
         }
    }
    if(c==str.size())
    {
        for(int i=0;i<str.size();i++)
        {
            if(i==0)
                cout<<(char)toupper(str[i]);
            else
            cout<<(char)tolower(str[i]);
        }
    }
    else if(d==str.size())
    {
        for(int i=0;i<str.size();i++)
        {
            cout<<(char)tolower(str[i]);
        }
    }
    else
        cout<<str1<<endl;

    return 0;

}
