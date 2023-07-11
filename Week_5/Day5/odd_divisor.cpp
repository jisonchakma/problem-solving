#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   int t;
   cin>>t;
  while(t--)
   {
     ll k;
     cin>>k;
      if((k&(k-1))==0)
       {
    cout<<"NO"<<"\n";
        } 
       else cout<<"YES"<<"\n";
 
     
   }
return 0;
}