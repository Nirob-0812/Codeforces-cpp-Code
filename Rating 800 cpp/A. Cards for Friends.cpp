#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n,c=1;
        cin>>w>>h>>n;
        while(w%2==0 || h%2==0)
        {
            if(w%2==0)
            {
                w=w/2;
                c=c*2;
            }
            else if(h%2==0)
            {
                h=h/2;
                c=c*2;
            }
        }
        if(c>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
