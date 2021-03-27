#include<iostream>
using namespace std;
int main()
{
    int n,p,rem,sum=0;
    cin>>n;
    p=n;
    while(1)
    {
        while(p!=0)
        {
            rem=p%10;
            sum=sum+rem;
            p=p/10;
        }
        if(sum%4==0)
        {
            break;
        }
        n++;
        p=n;
        sum=0;
    }
    cout<<n<<endl;
    
    return 0;
}