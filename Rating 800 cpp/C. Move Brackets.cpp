#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int n,c=0;
        cin>>n;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='(')
                c++;
            else
                c--;
            if(c<0)
                c=0;
        }
        cout<<c<<endl;

    }
}
