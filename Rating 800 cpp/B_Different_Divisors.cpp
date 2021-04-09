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
        ll d,a,b,i,second,third,c=1;
        cin>>d;
        a=1+d;
        while(1)
        {
            c=1;
            for(i=2;i<=sqrt(a);i++)
            {
                if(a%i==0)
                {
                    c=0;
                    break;
                }
            
            }
            if(c==0)
            a++;
            else
            {
                second=a;
                break;

            }
        }
        b=second+d;
        while(1)
        {
            c=1;
            for(i=2;i<=sqrt(b);i++)
            {
                if(b%i==0)
                {
                    c=0;
                    break;
                }
            
            }
            if(c==0)
            b++;
            else
            {
                third=b;
                break;

            }
        }

        cout<<second*third<<endl;
    }


return 0;
}

