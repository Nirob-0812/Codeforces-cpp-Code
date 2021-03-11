#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<double> v;
        vector<double> v1;
        double e,s,sum=0;
        long long int n,a,b,i;
        cin>>n;
        for(i=0;i<n*2;i++)
        {
            cin>>a>>b;
                v.push_back(abs(a));
                v1.push_back(abs(b));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());

        for(i=0;i<n;i++)
        {
            e=v[i]*v[i]+v1[i]*v1[i];
            s=sqrt(e);
            sum=sum+s;
        }
        cout<<fixed<<setprecision(15)<<sum<<endl;

        /*for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        */

    }

    return 0;
}
