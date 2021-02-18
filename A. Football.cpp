#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c=0;
    string str,one,zero;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==str[i+1])//1111111
        {
            c++;
            if(c>=6)
                break;
        }
        else
            c=0;
    }
            if(c>=6)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;

         return 0;
}
