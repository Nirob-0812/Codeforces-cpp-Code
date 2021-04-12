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
        int n,x[1000],y[1000],c=1,cnt=0,cnt1=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>x[i]>>y[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(x[i]>=x[j] && y[i]>=y[j])
                {
                    swap(x[i],x[j]);
                    swap(y[i],y[j]);
                }
            }
        }
        for(int i=0;i<n-1;i++)
        {
             if(x[i]>x[i+1] || y[i]>y[i+1])
             {
                 c=0;
                 break;
             }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
             {
                 for(int j=0;j<x[i]-cnt;j++)
                 {
                     cout<<"R";
                 }
                 cnt=x[i];
                 for(int j=0;j<y[i]-cnt1;j++)
                 {
                     cout<<"U";
                 }
                 cnt1=y[i];

             }
             cout<<endl;
        }


    }


return 0;
}

