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
#define testcase int t; cin>>t; while(t--)
#define getfor(i,n) for(int i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    testcase
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(x==0)
        {
            cout<<abs(a-b)<<endl;
            continue;
        }
        else if(a==1 && b==n || b==1 && a==n)
        {
            cout<<abs(a-b)<<endl;
            continue;
        }
        else
        {
            if(a<b)
            swap(a,b);
            if(x>=n-a)
            {
                x=x-(n-a);
                a=n;
            }
            else
            {
                a=a+x;
                x=0;
            }
            if(x>=b-1)
            {
                x=x-(b-1);
                b=1;
            }
            else
            {
                b=b-x;
            }
            
        }
        cout<<abs(a-b)<<endl;
    }


return 0;
}

