#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=INT_MIN;
    int i=0,j=0;
    while(j<n)
    {
      j++;
      //mx=max(mx,a[j]);
      deque<int>dq;
      dq.push_front(a[j]);
     if(j<k-1)
    {
        j++;
      }
      else
      {
        mx=max(mx,a[j]);
        i++;
        j++;
      }
      mx=max(a[j],mx);
      cout<<mx<<endl;
    }
}