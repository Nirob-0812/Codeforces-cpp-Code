#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n;
        cin>>n;
        if(n%2==0)
        {
        for(int i=n/2+1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n/2;i++)
        {
            cout<<i<<" ";
        }
        }
        else
        {
            for(int i=(n/2)+1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            for(int i=1;i<=n/2;i++)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
