#include<iostream>
using namespace std;
int main()
{
    int n,c,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    c=1;
    s=1;
    for(int i=1;i<n;i++) //1 2 3 4 1 2 3 4 5 6
    {
        if(a[i]>=a[i-1])
            c++;
        else
            c=1;
        s=max(s,c);

    }
    cout<<s<<endl;

    return 0;
}
