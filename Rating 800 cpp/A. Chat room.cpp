#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int k=0;k<str.size();k++)
      if(str[k]=='h')
        for(int l=k+1;l<str.size();l++)
         if(str[l]=='e')
            for(int m=l+1;m<str.size();m++)
              if(str[m]=='l')
                for(int n=m+1;n<str.size();n++)
                  if(str[n]=='l')
                    for(int o=n+1;o<str.size();o++)
                      if(str[o]=='o'){
                         cout<<"YES"<<endl;
                        goto nirob;
                      }
                    cout<<"NO"<<endl;
                    nirob:
                        cout<<"";

}
