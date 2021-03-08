#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,cnt_a=0,cnt_b=0;
        cin>>x>>y;
        long long int xx=x,yy=y,one,two;
        cin>>a>>b;
        if(x>y)
        {
            cnt_a=x-y;
            x=y;
        }
        if(x<y)
        {
           cnt_a=y-x;
           y=x;
        }
        if(x==y)
        {
             cnt_b=x-0;
        }
        one=(cnt_a*a)+(cnt_b*b);
        two=(xx+yy)*a;
        cout<<min(one,two)<<endl;
    }

    return 0;
}
