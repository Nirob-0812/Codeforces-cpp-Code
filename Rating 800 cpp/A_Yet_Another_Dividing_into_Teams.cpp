#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> v;
        int n,a,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            if(abs(v[i]-v[i+1])==1)
            c++;
        }
        if(c>=1)
        cout<<"2"<<endl;
        else
        cout<<"1"<<endl;
    }

    return 0;
}