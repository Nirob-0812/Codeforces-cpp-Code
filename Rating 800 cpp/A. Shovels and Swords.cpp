#include<iostream>
using namespace std;
int main()
{
     long long int t;
    cin>>t;
    while(t--)
    {
        long long a,b,Min,s;
        cin>>a>>b;
        Min=min(a,b);
        if(a==0 || b==0)
            cout<<"0"<<endl;
        else if(Min*3<(a+b))
        {
            cout<<Min<<endl;
        }
        else
        {
            cout<<(a+b)/3<<endl;
        }
    }

    return 0;
}
