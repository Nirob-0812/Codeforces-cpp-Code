#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n,sum=0,div,c=0,total=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        v.push_back(a[i]);
    }
        div=sum/2;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        total=total+v[i];
        c++;
        if(total>div)
            break;
    }
    cout<<c<<endl;

    return 0;


}
