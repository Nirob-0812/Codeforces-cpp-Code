#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long
#define pb push_back 
#define testcase int t; cin>>t; while(t--)
#define getfor(i,n) for(int i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    testcase
    {
        vi v;
        int n,a;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        getfor(i,n)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }


return 0;
}

