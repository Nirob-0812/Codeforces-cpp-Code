#include<iostream>
using namespace std;
int main()
{
    int n,sum,div;
    cin>>n;
    if(n%2==0)
    {
        cout<<"8"<<" "<<n-8<<endl;
    }
    if(n%2==1)
    {
        cout<<"9"<<" "<<n-9<<endl;
    }

    return 0;
}
