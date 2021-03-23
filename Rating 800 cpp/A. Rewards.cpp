#include<iostream>
using namespace std;
int main()
{
    int n,a1,a2,a3,b1,b2,b3,sum_a,sum_b;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    sum_a=a1+a2+a3;
    sum_b=b1+b2+b3;
    if(sum_a%5==0 && sum_b%10==0)
    {
        if(((sum_a/5)+(sum_b/10))<=n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else if(sum_a%5==0 && sum_b%10!=0)
    {
        if(((sum_a/5)+(sum_b/10)+1)<=n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else if(sum_a%5!=0 && sum_b%10==0)
    {
        if(((sum_a/5)+1+(sum_b/10))<=n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if(((sum_a/5)+1+(sum_b/10)+1)<=n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

}
