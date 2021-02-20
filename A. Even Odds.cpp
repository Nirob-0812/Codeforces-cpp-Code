#include<iostream>
using namespace std;
int main()
{
    int n,k,d,s=1,t=2;

    cin>>n>>k;
     if(n%2==0)
         {
             if(n/2>=k)
             {
                 cout<<k*2-1<<endl;
             }
             else
             {
                 cout<<(2*k)-n<<endl;
             }
         }
         else
         {
             if(n/2+1>=k)
             {
                 cout<<k*2-1<<endl;
             }
             else
             {
                 cout<<k*2-n-1<<endl;
             }
         }

     return 0;
}
