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
        ll n,c=0,cnt=0;
        string str;
        cin>>n;
        cin>>str;
        if(n<11)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=n;i>=0;i--)
        {
            if(str[i]=='8'&&cnt>10)
            {
                c=1;
                break;
            }
            cnt++;
        }
        if(c==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }


return 0;
}

