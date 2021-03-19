#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b,sum=1,i,sum1=1;
    cin>>a>>b;
    a=min(a,b);
    for(i=1;i<=a;i++)
    {
        sum=sum*i;
    }
    cout<<sum<<endl;

    return 0;
}
