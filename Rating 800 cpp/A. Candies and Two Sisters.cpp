#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,div;
        cin>>n;
        div=n/2;
        cout<<n-(div+1)<<endl;
    }
}
