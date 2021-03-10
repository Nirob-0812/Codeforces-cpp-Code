#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,k,a;
        cin>>n>>k;
        cout<<((k-1)/(n-1))+k<<endl;
        /*for(i=1;i<=k;i++)
        {
            if(i%n==0)
            {
                k=k+1;
            }
            else
                a=i;
        }
        cout<<a<<endl;
        */
    }
}
