#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,s=0;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
            {
                for(int j=i+1;j<str.size();j++)
                {
                    if(str[j]=='0')
                    {
                        c++;
                    }
                    else
                    {
                        s=s+c;
                        c=0;
                        i=j;
                    }
                }
            }
        }

        cout<<s<<endl;
    }

    return 0;
}
