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
        sc s;
        vc v;
        string str;
        int n,c=0,sub;
        cin>>n;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            s.insert(str[i]);
            v.pb(str[i]);
        }
        if(s.size()==1 && v[0]==')')
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else if(v[n-1]!=')')
        {
            cout<<"No"<<endl;
            continue;
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                if(str[i]==')')
                {
                    c++;
                }
                else
                break;
            }
        
        sub=n-c;
        if(sub<c)
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
        }

    }


return 0;
}

