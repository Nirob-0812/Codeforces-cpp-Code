#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float ar[n];
    double avg,sum;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    avg=sum/n;
    cout<<fixed<<setprecision(12)<<avg<<endl;
}
