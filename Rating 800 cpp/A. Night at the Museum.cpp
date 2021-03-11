#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int sub,sum=0,cnt;
    cin>>str;
    for(int i=0;i<str.size()-1;i++)
    {
            sub=str[i]-str[i+1];
            if(sub<0)
                sub=26+sub;
            else
                sub=sub;
            if(sub>=13)
            {
                sub=26-sub;
            }
            else
                sub=sub;

        sum=sum+sub;
    }
    sub=('a'-str[0])+26;
    if(sub>=13)
    {
        sub=26-sub;
    }
    cout<<sum+sub<<endl;

    return 0;
}
