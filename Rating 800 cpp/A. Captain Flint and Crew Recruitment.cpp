#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<31)
        {
            cout<<"NO"<<endl;
        }
        else if(n==31)
        {
            cout<<"YES"<<endl;
            cout<<"1 "<<"6 "<<"10 "<<"14 "<<endl;
        }
        else if(n==33)
        {
            cout<<"YES"<<endl;
            cout<<"3 "<<"6 "<<"14 "<<"10 "<<endl;
        }
        else if(n==36 || n==44)
        {
            cout<<"YES"<<endl;
            cout<<"6 "<<"10 "<<"15 "<<n-31<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<"6 "<<"10 "<<"14 "<<n-37<<endl;
        }
    }

    return 0;
}
