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
        ll n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n-1;i++)
        {
            if(str[i]!=str[i+1])
            {
                for(int j=i+1;j<n;j++)
                if(str[i]==str[j])
                {
                    ok=true;
                    break;
                }
            }
            if(ok)
            break;
        }
        if(ok)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }


return 0;
}

