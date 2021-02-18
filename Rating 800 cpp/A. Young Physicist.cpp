#include<iostream>
using namespace std;
int main()
{
    int n,total,sum1=0,sum2=0,sum3=0;
    cin>>n;
    total=n*3;
    int a[total];
    for(int i=0;i<total;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<total;i=i+3)
    {
        sum1=sum1+a[i];
    }
    for(int i=1;i<total;i=i+3)
    {
        sum1=sum1+a[i];
    }
    for(int i=2;i<total;i=i+3)
    {
        sum3=sum3+a[i];
    }

    if(sum1==0 && sum2==0 && sum3==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;

}
