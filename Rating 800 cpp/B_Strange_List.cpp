#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<pair<long long,long long>> vec;
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
        vec v;
        ll n,a,x,sum=0,j,i;
        cin>>n>>x;
        getfor(i,n)
        {
            cin>>a;
            v.pb({a,1});
        }
        i=0;
        while(1)
        {
            if((v[i].first)%x)
            break;
            j=v[i].second*x;
            v.pb({(v[i].first/x),j});
            i++;
        }
        for(int p=0;p<v.size();p++)
        sum+=v[p].first*v[p].second;
        cout<<sum<<endl;
    }


return 0;
}

