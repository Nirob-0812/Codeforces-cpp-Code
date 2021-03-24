#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(i%2==0)
            {
                if(str[i]=='a')
                    cout<<"b";
                else
                    cout<<"a";
            }
            else
            {
                if(str[i]=='z')
                    cout<<"y";
                else
                    cout<<"z";
            }
        }
        cout<<endl;
    }

    return 0;
}
