#include<iostream>
using namespace std;
int main()
{
    long long int n,x,d,sum,cnt=0;
    char s;
    cin>>n>>x;
    sum=x;
    while(n--)
    {
        cin>>s>>d;
        if(s=='+')
        {
            sum=sum+d;
        }
        else if(s=='-')
        {
            if(sum<d)
            {
                cnt++;
            }
            else
            {
                sum=sum-d;
            }
        }
    }

    cout<<sum<<" "<<cnt<<endl;

    return 0;
}
