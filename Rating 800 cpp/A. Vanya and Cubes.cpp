#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,c=0,m=1;
    cin>>n;
    while(n>sum)
    {
        sum=sum+m;
        n=n-sum;
        m++;
        if(n>=0)
        c++;
    }
        cout<<c<<endl;
        return 0;
}
