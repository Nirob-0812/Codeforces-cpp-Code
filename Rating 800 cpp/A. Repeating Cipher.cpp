#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,p=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<str[0];
        }
        else
        {
            cout<<str[i];
            i=i+p;
        }
        p++;
    }
    cout<<endl;
    return 0;
}
