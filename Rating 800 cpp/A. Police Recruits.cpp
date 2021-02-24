#include<iostream>
using namespace std;
int main()
{
    int n,c=0,j=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==(-1))
        {
            if(j>=1)
            j--;
            else
            c++;
        }
        else if(a[i]>=1)
        {
            j=j+a[i];
        }
    }
    cout<<c<<endl;
    return 0;
}
