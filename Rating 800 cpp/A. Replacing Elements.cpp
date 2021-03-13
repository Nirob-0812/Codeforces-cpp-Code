#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,d,up=0,a,low=0,dif;
        cin>>n>>d;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
       sort(v.begin(),v.end());
       if(v[0]+v[1]>d && v[n-1]>d)
        cout<<"NO"<<endl;
       else
        cout<<"YES"<<endl;
    }

    return 0;
}
