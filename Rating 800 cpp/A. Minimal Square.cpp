#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,max1,min1,sqr,rec;
        cin>>a>>b;
        min1=min(a,b);
        max1=max(a,b);
        rec=min1*2;
        if(rec<max1)
        {
            sqr=max1*max1;
            cout<<sqr<<endl;
        }
        else if(rec>=max1)
        {
            sqr=rec*rec;
            cout<<sqr<<endl;
        }
    }
}
