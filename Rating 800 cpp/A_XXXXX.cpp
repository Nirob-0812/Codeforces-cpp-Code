#include<bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<char> vc;
typedef vector<int>:: iterator vit;
typedef set<int> si;
typedef set<char> sc;
typedef set<int>::iterator sit;
#define ll long long
#define pb push_back 
#define testcase long long int t; cin>>t; while(t--)
#define getfor(i,n) for(long long int i=0;i<n;i++) 
#define sort_array sort(vi.begin(),vi.end());


int main()
{
    testcase
    {
        vi v;
        long long int n,x,a,sum=0,cnt1=0,cnt=0,p,t=0;
        cin>>n>>x;
        getfor(i,n)
        {
            cin>>a;
            sum=sum+a;
            v.push_back(a);
        }
        if(sum%x)
        {
        cout<<n<<endl;
        continue;
        }
        else
        {
            getfor(i,n)
            {
                cnt++;
                if(v[i]%x)
                break;
            }
            for(int j=n-1;j>=0;j--)
            {
                cnt1++;
                if(v[j]%x)
                {
                t=1;
                break;
                }
            }
        }
        if(t==1)
        {
            p=min(cnt,cnt1);
            cout<<n-p<<endl;
        }
        else
        cout<<"-1"<<endl;

        v.clear();
        t=0;
        cnt=0;
        cnt1=0;
        sum=0;

    }


return 0;
}

