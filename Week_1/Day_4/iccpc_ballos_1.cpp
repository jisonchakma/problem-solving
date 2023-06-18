#include<bits/stdc++.h>
using namespace std;
int main()
{
  int  t;
  cin>>t;
  while(t--)
  {
  int n;
  cin>>n;
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  int count=0;
  for(int i=0;i<n;i++)
  {
      if(s[i]!=s[i+1])
      {
          count+=2;
      }
      else
      {

          count++;
      }
  }
  cout<<count<<endl;
  count=0;
  }
  return 0;
}
