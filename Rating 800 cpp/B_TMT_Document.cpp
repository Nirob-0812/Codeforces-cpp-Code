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
        string str;
        ll n,m=0,t=0,cnt=0;
        cin>>n;
        cin>>str;
        getfor(i,n)
        {
            if(str[i]=='T')
            t++;
            else
            m++;
        }
        if(m!=(n/3))
        {
            cout<<"NO"<<endl;
            continue;
        }
        m=0;
        t=0;
        getfor(i,n)
        {
            if(str[i]=='M')
            m++;
            else
            t++;
            if(m>t)
            cnt=1;
        }
        m=0;
        t=0;
        for(int i=n-1;i>=0;i--)
        {
            if(str[i]=='M')
            m++;
            else
            t++;
            if(m>t)
            cnt=1;
        }
        if(cnt==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        cout<<"NO"<<endl;

    }


return 0;
}

