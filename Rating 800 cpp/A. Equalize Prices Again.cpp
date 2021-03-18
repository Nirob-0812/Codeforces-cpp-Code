#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        vector<int> v;
        int n,a,sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            sum=sum+a;
        }
        if(sum%n!=0)
        {
            cout<<(sum/n)+1<<endl;
        }
        else
            cout<<sum/n<<endl;
    }

    return 0;
}
