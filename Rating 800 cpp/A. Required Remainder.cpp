#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,div,mul;
        cin>>x>>y>>n;
        div=(n/x);
        mul=(div*x)+y;
        if(mul<=n)
        {
            cout<<mul<<endl;
        }
        else if(mul>n)
        {
            div=div-1;
            mul=(div*x)+y;
            cout<<mul<<endl;
        }
    }
}
