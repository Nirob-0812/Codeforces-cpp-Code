#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0 && k==0)
        {
            cout<<"0"<<endl;
        }
        else if(n<=k)
        {
            cout<<k-n<<endl;
        }
        else if(n%2==1 && k==0)
        {
            cout<<"1"<<endl;
        }
        else if(n>k && n%2==1 && k%2==1)
        {
            cout<<"0"<<endl;
        }
        else if(n>k && (n%2==1 || k%2==1))
        {
            cout<<"1"<<endl;
        }
        else if(n>k && n%2==0 && k%2==0)
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}
