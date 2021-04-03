#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long
#define pb push_back 
#define testcase long long int t; cin>>t; while(t--)
#define getfor(i,n) for(int i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    long long int n,a,i,j,s,c=0,p;
    testcase
    {
        cin>>a;
        s=sqrt(a);
        if(s==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(s*s==a)
        {
            p=sqrt(s);
            for(i=2;i<=p;i++)
            {
                if(s%i==0)
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(i==p+1)
            {
                cout<<"YES"<<endl;
            }
        }
        else
        cout<<"NO"<<endl;

    }

return 0;
}

