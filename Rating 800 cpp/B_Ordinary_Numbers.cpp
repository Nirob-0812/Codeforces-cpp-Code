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
        bool ok=false;
        vi v;
        ll n,m,temp,cnt=0,rem,sum=0;
        cin>>n;
        temp=n;
        while(n!=0)
        {
            rem=n%10;
            v.pb(rem);
            n=n/10;
            cnt++;
        }
        for(int i=1;i<=cnt;i++)
        sum=(sum*10)+v[v.size()-1];
        if(temp<sum)
        m=v[v.size()-1]-1;
        else
        m=v[v.size()-1];
        cnt--;
        cout<<(cnt*9)+m<<endl;
    }


return 0;
}

