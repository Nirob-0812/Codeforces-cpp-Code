#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
             cout<<v[i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}

