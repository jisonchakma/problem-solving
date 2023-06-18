#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%k==0)
        {
            count++;
        }
        a.push_back(x);
   }
   cout<<count<<endl;
   return 0;
}