#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b;
         c=a/b;
         if(a%b!=0)
            c++;
         cout<<c*b-a<<endl;
        /*while(a%b!=0)
        {
            a++;
            c++;
        }
        cout<<c<<endl;*/
    }
    return 0;
}
