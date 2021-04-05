#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long int
#define pb push_back 
#define testcase ll t; cin>>t; while(t--)
#define getfor(i,n) for(ll i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    testcase
    {
        si s;
        int n,a;
        cin>>n;
        getfor(i,n)
        {
            cin>>a;
            s.insert(a);
        }
        if(s.size()==1)
        {
            cout<<n<<endl;
        }
        else
        cout<<"1"<<endl;
        s.clear();

    }

return 0;
}
