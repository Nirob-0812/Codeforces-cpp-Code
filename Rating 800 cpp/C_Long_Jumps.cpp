#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long
#define pb push_back 
#define testcase long long int t; cin>>t; while(t--)
#define getfor(i,n) for(long long int i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    testcase
    {
        vi v;
        long long int n,a[200000],sum=0,x;
        cin>>n;
        getfor(i,n)
        {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]+i<n)
            {
                a[i]=a[i]+a[a[i]+i];
            }
            v.pb(a[i]);
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
        v.clear();
    }


return 0;
}

