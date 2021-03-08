#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,odd=0,even=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
                odd++;
        }
        if(odd==0 || even==0 && odd%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }

    return 0;
}
