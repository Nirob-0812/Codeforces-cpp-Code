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
        int n,a,Mx,Mn,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n-1;i++)
        {
                Mn=min(v[i],v[i+1]);
                Mx=max(v[i],v[i+1]);
                Mn=Mn+Mn;
                while(Mn<Mx)
                {
                    c++;
                    Mn=Mn+Mn;

                }
        }
        cout<<c<<endl;
    }

    return 0;
}
