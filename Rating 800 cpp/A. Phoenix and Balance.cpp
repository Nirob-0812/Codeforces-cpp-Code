#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int> v;
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,sum1=0;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            a[i]=pow(2,i);
            if(i<(n/2))
            sum=sum+a[i];
            else if(i>=(n/2) && i<n)
                sum1=sum1+a[i];
        }
        sum=sum+a[n];
        cout<<abs(sum-sum1)<<endl;
    }
}
