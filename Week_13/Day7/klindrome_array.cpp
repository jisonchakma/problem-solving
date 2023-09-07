#include<bits/stdc++.h>
using namespace std;
int is_check(vector<int>&v)
{
    int i=0,j=v.size()-1;
    int ans=1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            ans=-1;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int i=0,j=n-1;
    int a,b;
    int ans=-1;
    while(i<j)
    {
        if(ar[i]!=ar[j])
        {
            ans=1;
            a=ar[i];
            b=ar[j];
            break;

        }
        i++;
        j--;
    }
    if(ans==-1)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        vector<int>b1,b2;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==a)
            continue;
            else
            b1.push_back(ar[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]==b)
            continue;
            else
            b2.push_back(ar[i]);
        }
        int ans1=is_check(b1);
        int ans2=is_check(b2);
        if(ans1==1 or ans2==1)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}