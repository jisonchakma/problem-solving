#include<bits/stdc++.h>
using namespace std;
#define ll long long
int Max_N=1e5+5;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int mn=a[0];
    for(int i=1;i<n;i++)
    {
         mn=min(mn,a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
        count++;
    }
    if(count%2!=0)
    cout<<"Lucky"<<endl;
    else
    cout<<"Unlucky"<<endl;
    return 0;
    
}