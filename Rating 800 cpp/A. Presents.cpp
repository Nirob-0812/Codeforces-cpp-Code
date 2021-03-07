#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    int p[101];
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        p[a]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}
