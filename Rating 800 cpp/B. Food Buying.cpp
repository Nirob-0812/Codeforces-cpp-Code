#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int sum=0,p,r;
        while(1)
        {
             if(s%10==0)
             {
                 s=s/10;
                 p=s*10;
                 sum=sum+p;
                 if(s<10)
                 {
                     sum=sum+s;
                     break;
                 }
             }
             else
             {
                 r=s%10;
                 s=s/10;
                 p=s*10;
                 sum=sum+p;
                 s=s+r;
                 if(s<10)
                 {
                     sum=sum+s;
                     break;
                 }
             }
        }

        cout<<sum<<endl;
    }

    return 0;
}
