#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool is_find=true;
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n;j++)
            {
                if(abs(a[i]-a[j])==1)
                {
                    is_find=false;
                    break;
                }
            }
    }
    if(is_find==true)
    cout<<1<<endl;
    else
    cout<<2<<endl;
        
    
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
    return 0;
}