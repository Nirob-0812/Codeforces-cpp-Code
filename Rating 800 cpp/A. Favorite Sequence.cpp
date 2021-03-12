#include<iostream>
#include<vector>
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
        int j=n-1;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n/2+1;i++)
        {
            cout<<v[i]<<" ";
            if(j>n/2)
            {
            cout<<v[j]<<" ";
            }
            j--;
        }
        cout<<endl;
    }
}
