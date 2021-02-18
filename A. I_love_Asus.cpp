#include<iostream>
using namespace std;
int main()
{
    int n,best,worst,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)//4664 6496 5814 7010 5762 5736 6944 4850 3698 7242
    {
        cin>>a[i];
    }
    best=worst=a[0];
    for(int i=1;i<n;i++)
    {
        if(best<a[i])
        {
            best=a[i];//1.2.3
            c++;
        }
        if(worst>a[i])
        {
            worst=a[i];
            c++;
        }
    }
    cout<<c<<endl;
}
