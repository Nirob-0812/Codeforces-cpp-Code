#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1,v2,v3;
    int n,min1,min2;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        v1.push_back(i);
        if(a[i]==2)
        v2.push_back(i);
        if(a[i]==3)
        v3.push_back(i);
    }
    min1=min(min(v1.size(),v2.size()),v3.size());
    cout<<min1<<endl;
    for(int i=0;i<min1;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }

}
