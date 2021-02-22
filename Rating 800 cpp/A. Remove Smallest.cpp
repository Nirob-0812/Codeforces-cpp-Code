#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,dif;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            dif=abs(v[i]-v[i+1]);
            if(dif>1)
            {
                cout<<"NO"<<endl;
                goto nirob;
            }
        }
            cout<<"YES"<<endl;
            nirob:
                cout<<"";
    }
    return 0;
}
