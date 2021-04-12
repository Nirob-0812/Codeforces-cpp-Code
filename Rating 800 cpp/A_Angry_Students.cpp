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
        int n,cnt=0,k=0,c=0,ans=0;
        cin>>n;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='A')
            { 
                for(int j=i+1;j<n;j++)
                {
                    if(str[j]=='A')
                    break;
                    else
                    cnt++;
                    c++;

                }
            }
            ans=max(ans,cnt);
            cnt=0;
            i=i+c;
            c=0;
        }
        cout<<ans<<endl;
    }


return 0;
}

