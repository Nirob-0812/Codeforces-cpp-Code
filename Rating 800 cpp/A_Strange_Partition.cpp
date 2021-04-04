#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long int 
#define pb push_back 
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    testcase
    {
        vi v;
        ll n,x,sum=0,sum1=0,a;
        cin>>n>>x;
        getfor(i,n)
        {
            cin>>a;
            if(a%x)
            v.pb((a/x)+1);
            else
            v.pb(a/x);
            sum=sum+a;
        }
        getfor(i,n)
        {
            sum1=sum1+v[i];
        }
        if(sum%x)
        sum=(sum/x)+1;
        else
        sum=sum/x;
        cout<<min(sum,sum1)<<" "<<max(sum,sum1)<<endl;
    }


return 0;
}

