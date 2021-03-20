#include<iostream>
using namespace std;
int main()
{
    int n,a,b,Min;
    cin>>n>>a>>b;
    Min=min(a,b);
    if(a>b && n<a+b)
    {
        cout<<n-a<<endl;
        return 0;
    }
    else if(a==b && n<a+b)
    {
        cout<<n-a<<endl;
        return 0;
    }
    else if(a==b && n>a+b)
    {
        cout<<a+1<<endl;
        return 0;
    }
    else if(a>b)
    {
        cout<<Min+1<<endl;
        return 0;
    }
    else if(b>a && n>a+b)
    {
        cout<<max(a,b)+1<<endl;
        return 0;
    }
    else if(Min==0)
    {
        cout<<"1"<<endl;
        return 0;
    }

    cout<<n-Min<<endl;

    return 0;
}
