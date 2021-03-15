#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,a,c=0,even=0,odd=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                even++;
            else
                odd++;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]==1)
            {
                c++;
                break;
            }
        }
        if(c==1 || (even%2==0 && odd%2==0))
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
