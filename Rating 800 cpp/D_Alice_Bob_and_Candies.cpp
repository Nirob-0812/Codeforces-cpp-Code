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
        vi v;
        vi v1;
        vi v2;
        ll n,q,cnt=0,ali=0,bob=0,sum=0,sum1=0,p,c,i=0,r=0;
        cin>>n;
        getfor(i,n)
        {
            cin>>q;
            v.pb(q);
        }
        p=n-1;
        c=0;
        while(1)
        {
            cnt++;
            if(i%2==0)
            {
                sum=0;
                while(sum<=sum1)
                {
                    sum=sum+v[c];
                     ali=ali+v[c];
                    //cout<<ali<<" ";
                    c++;
                    r++;
                    if(r==n)
                    {
                        goto nirob;
                    }
                }
            }
            else
            {
                sum1=0;
                while(sum1<=sum)
                {
                    sum1=sum1+v[p];
                    bob=bob+v[p];
                    //cout<<bob<<" ";
                    p--;
                    r++;
                    if(r==n)
                    {
                        goto nirob;
                    }
                }
            }
            i++;

        }
        nirob:
        cout<<cnt<<" "<<ali<<" "<<bob<<endl;
        v.clear();
        r=0;

    }


return 0;
}

