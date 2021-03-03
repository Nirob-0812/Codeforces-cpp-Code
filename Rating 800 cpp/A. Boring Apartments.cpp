#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int mul,sum=0;
        string str;
        cin>>str;
        if(str[0]=='1')
            mul=0;
        else if(str[0]=='2')
            mul=10;
        else if(str[0]=='3')
            mul=20;
        else if(str[0]=='4')
            mul=30;
        else if(str[0]=='5')
            mul=40;
        else if(str[0]=='6')
            mul=50;
        else if(str[0]=='7')
            mul=60;
        else if(str[0]=='8')
            mul=70;
        else if(str[0]=='9')
            mul=80;


        for(int i=1;i<=str.size();i++)
        {
            sum=sum+i;
        }
        cout<<mul+sum<<endl;
        sum=0;
    }
}
