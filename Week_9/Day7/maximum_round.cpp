#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
   string x;
   cin>>x;
   int n=x.size();
   int idx=n-1;
   int pos=n;
   while(idx>-1)
   {
      if(x[idx]-'0'>=5)
      {
         int nxt=idx-1;
         while(nxt>-1&&x[nxt]==9)
         {
            --nxt;
         }
         if(nxt==-1)
         {
            pos=1;
            x='1'+x;
            break;
         }
         else
         {
            idx=nxt;
            pos=nxt+1;
            int c=x[idx]-'0';
            c++;
            x[idx]=char(c+'0');
         }
      }
      else
      {
        --idx;    
      }
   }
   for(int i=pos;i<x.size();i++)
   {
      x[i]='0';
   }
   cout<<x<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}