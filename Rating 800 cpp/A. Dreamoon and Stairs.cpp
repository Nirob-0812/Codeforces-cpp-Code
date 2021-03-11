#include<iostream>
using namespace std;
int main()
{
    int n,m,div;
    cin>>n>>m;
    div=(n+1)/2;
    if(n<m)
    {
        cout<<"-1"<<endl;
        goto nirob;
    }
    while(div)
    {
        if(div%m==0)
        {
            cout<<div<<endl;
            break;
        }
        else
            div++;
    }
     nirob:
    return 0;
}
