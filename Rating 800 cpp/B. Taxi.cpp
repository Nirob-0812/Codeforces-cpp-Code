#include<iostream>
using namespace std;
int main()
{
    int n,sum,temp,four=0,three=0,two=0,one=0,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==4)
        {
            four++;
        }
        if(a[i]==3)
        {
            three++;
        }
        if(a[i]==2)
        {
            two++;
        }
        if(a[i]==1)
        {
            one++;
        }
    }
    if(one>three)
        {
        t=one-three;
        sum=t*1+two*2;
        if(sum<4)
        {
            sum=1;
            goto nirob;
        }
            double sum1=(double)sum/4;
            sum=sum/4;
            if(sum1>sum)
            {
                sum=sum+1;
            }
            else
                sum=sum;
        }
        if(one<=three)
        {
            sum=two*2;
            if(sum<4 && sum>=1)
            {
                sum=1;
                goto nirob;
            }
            double sum1=(double)sum/4;
            sum=sum/4;
            if(sum1>sum)
            {
                sum=sum+1;
            }
            else
                sum=sum;

        }
        nirob:
        cout<<four+three+sum;
    return 0;
}
