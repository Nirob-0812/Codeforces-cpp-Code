#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,enough_drink,enough_lime,enough_salt;
    int avg_enough_drink,avg_enough_lime,avg_enough_salt,ans;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    enough_drink=(k*l)/nl;
    enough_lime=c*d;
    enough_salt=p/np;

    avg_enough_drink=enough_drink/n;
    avg_enough_lime=enough_lime/n;
    avg_enough_salt=enough_salt/n;

    ans =min(min(avg_enough_drink,avg_enough_lime),avg_enough_salt);

    cout<<ans<<endl;

    return 0;

}
