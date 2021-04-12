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
        vi v;
        int n,k,s,cnt=0;
        cin>>n>>k;
        s=(n-1)/2;
        if(s<k)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            if(n%2==1)
            {
            v.pb(1);
            for(int i=2;i<=n;i++)
            {
                if(cnt<k*2)
                {
                if(i%2==0)
                v.pb(i+1);
                else
                v.pb(i-1);
                cnt++;
                continue;
                }
                v.pb(i);
            }
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            }
            else if(n%2==0)
            {
            v.pb(1);
            for(int i=2;i<n;i++)
            {
                if(cnt<k*2)
                {
                if(i%2==0)
                v.pb(i+1);
                else
                v.pb(i-1);
                cnt++;
                continue;
                }
                v.pb(i);
            }
            v.pb(n);
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            }
        }


    }


return 0;
}

