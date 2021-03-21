#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        if((k1+k2)>=2*w && ((n*2)-(k1+k2))>=b*2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
