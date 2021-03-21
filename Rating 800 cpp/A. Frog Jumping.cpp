#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        if(k%2==0)
        {
            cout<<(a*(k/2))-(b*(k/2))<<endl;
        }
        else
        {
            cout<<((a*((k/2)+1))-(b*(k/2)))<<endl;
        }
    }

    return 0;
}
