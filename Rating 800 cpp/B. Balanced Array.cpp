#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=2,a,sum=0,k=1,sum1=0,sum2;
        cin>>n;
        a=n/2;
        if(a%2!=0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<a;i++)
            {
                cout<<j<<" ";
                sum=sum+j;
                j=j+2;
            }

            for(int i=0;i<a-1;i++)
            {
                cout<<k<<" ";
                sum1=sum1+k;
                k=k+2;
            }
            sum2=sum-sum1;
            cout<<sum2<<endl;


        }
    }
}
