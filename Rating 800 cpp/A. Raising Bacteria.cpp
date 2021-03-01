#include<iostream>
using namespace std;
int main()
{
    int x,c=0;
    cin>>x;
    while(x!=0)
    {
        if(x%2==1)
        {
            c++;
        }
        x=x/2;
    }

    cout<<c<<endl;
    return 0;
}
