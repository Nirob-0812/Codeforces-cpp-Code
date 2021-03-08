#include<iostream>
using namespace std;
int main()
{
    int employee,Count=0;
    cin>>employee;
    for(int i=1;i<employee;i++)
    {
        if(employee%i==0)
        {
            Count++;
        }
    }
    cout<<Count<<endl;
}
