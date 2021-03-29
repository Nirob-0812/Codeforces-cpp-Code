#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<long long int> v;
    long long int n,i,a,sub,sum=0,c=0,z=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<n;i++)
    {
            sub=abs(v[i])-1;
            sum=sum+abs(sub);
            if(v[i]<0)
            c++;
            if(v[i]==0)
            z++;
    }
    if(c%2==1 && z==0)
    c=2;
    else
    c=0;
    cout<<sum+c<<endl;
}