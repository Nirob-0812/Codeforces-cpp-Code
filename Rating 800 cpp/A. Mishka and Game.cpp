#include<iostream>
using namespace std;
int main()
{
    int n,mis=0,cris=0;
    cin>>n;
    int m[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i]>>c[i];
        if(m[i]>c[i])
            mis++;
        else if(m[i]<c[i])
            cris++;
    }
    if(mis>cris)
        cout<<"Mishka"<<endl;
    else if(mis<cris)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
