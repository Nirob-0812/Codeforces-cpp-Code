#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0 && k%2==0 && k*k<=n || n%2!=0 && k%2!=0 && k*k<=n)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
