#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   // remove_elements(a,n,x);
   for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }
     int count=0;
    for(int i=0;i<n;i++)
    {
       // int count=0;
        if(a[i]!=x)
        {
            a[i-count]=a[i];
            
        }
        else
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"";
    }
    else
    {
    for(int i=0;i<(n-count);i++)
    {
        cout<<a[i]<<" ";
    }
    }
    return 0;

}