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
        ll n,a,c=0,p,cnt=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            v.pb(a);
            if(a%2==0 && c==0)
            {
            p=i+1;
            c=1;
            }
        }
        if(c==1)
        {
            cout<<"1"<<endl;
            cout<<p<<endl;
            continue;
        }
        else if(n%2==0)
        {
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            cout<<i<<" ";
            cout<<endl;
        }
        else if(n%2 && n>2)
        {
            for(int i=0;i<n-1;i++)
            {
                if((v[i]+v[i+1])%2==0)
                {
                    p=i;
                    cnt=1;
                    break;
                }
            }
            if(cnt==1)
            {
                cout<<"2"<<endl;
                cout<<p+1<<" "<<p+2<<endl; 
            }
            continue;
        }
        else
        cout<<"-1"<<endl;
    }


return 0;
}

