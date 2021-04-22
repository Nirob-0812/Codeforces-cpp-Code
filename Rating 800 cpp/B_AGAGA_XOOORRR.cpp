#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<long long int>:: iterator viit;
typedef vector<char> vc;
typedef vector<char>:: iterator vcit;
typedef set<long long int> si;
typedef set<long long int>::iterator siit;
typedef set<char> sc;
typedef set<char>::iterator scit;
#define ll long long int
#define pb push_back 
#define Nirob int main()
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


Nirob
{
    testcase
    {
        int n;
        cin>>n;

        ll a[n];
        for(ll &x:a) cin>>x;

        ll s=0,s1=0;
        for(ll x:a) s^=x;

        if(s==0) 
        {
            cout<<"YES\n";
            continue;
        }       
        bool ok=false;

        for(int i=0; i<n; i++)
        {
            s1^=a[i];
            s=0;
            for(int j=i+1; j<n; j++)
            {
                s^=a[j];
                if(s==s1 && j==n-1) ok=true;
                if(s==s1) s=0;
            }
        }
        s1=0;
        for(int i=n-1; i>=0; i--)
        {
            s1^=a[i];
            s=0;
            for(int j=i-1; j>=0; j--)
            {
                s^=a[j];
            
                if(s==s1 && j==0)
                    ok=true;
                if(s==s1)
                    s=0;
            }
            if(ok) break;
        }

        cout<<(ok ? "YES\n":"NO\n");
    }


return 0;
}

