#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int one=0,zero=0,c;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
            {
                one++;
            }
            else
                zero++;
        }
        c=min(one,zero);
        if(c%2==1)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }

    return 0;
}

