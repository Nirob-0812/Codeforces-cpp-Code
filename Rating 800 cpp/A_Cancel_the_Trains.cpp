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
#define getfor for(int i=0;i<n;i++) 
#define getfor1  for(int j=0;j<m;j++)
#define sort_array sort(vi.begin(),vi.end()); 

int main()
{
    testcase
    {
        vector<int> v1;
        vector<int> vi;
        int n,m,c=0,a,b;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            vi.push_back(a);
        }
        for(int j=0;j<m;j++)
        {
            cin>>b;
            v1.push_back(b);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vi[i]==v1[j])
                c++;
            }
        }

        cout<<c<<endl;
        c=0;
    }
    
    return 0;
}