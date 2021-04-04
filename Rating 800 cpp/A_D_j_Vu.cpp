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
    int n;
    cin>>n;
    while(n--)
    {
        int c=0;
         set<char> s;
        vector<char> v;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            s.insert(str[i]);
            v.pb(str[i]);
        }
        if(s.size()==1 && v[0]=='a')
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;

                for(int i=0;i<str.size();i++)
                 {
                     cout<<v[i];
                     if(v[i]!=v[str.size()-i-1] && c==0)
                     {
                         cout<<"a";
                         c=1;
                     }
                 }
                if(c==0)
                    cout<<"a";
                 cout<<endl;
        }

        s.clear();
        v.clear();
        c=0;

    }


return 0;
}


