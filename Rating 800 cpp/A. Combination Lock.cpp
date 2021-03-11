#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,sum=0,sub;
    cin>>n;
    string str,str1;
    cin>>str>>str1;
    for(int i=0;i<n;i++)
    {
        sub=str[i]-str1[i];
        if(sub<1)
        {
            sub=sub+10;
        }
        if(sub>5)
        {
            sub=10-sub;
        }
        sum=sum+sub;
    }
    cout<<sum<<endl;

}

