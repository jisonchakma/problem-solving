#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    //11 2
    int ans=0;
    while(n>0)
    {
        n/=k;
        cout<<n<<endl;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}