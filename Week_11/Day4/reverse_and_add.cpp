#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll reverse(ll n)
{
    ll tmp=0;
    while(n)
    {
        tmp*10+n%10;
        n/=10;
    }
    return tmp;
}
static char ans[16];
bool is_palindrome(ll sum)
{
    int sz=0;
    while(sum)
    {
        ans[sz++]=sum%10;
        sum/=10;
    }
    for(int i=0,j=sz-1;i<j;++i,--j)
    {
        if(ans[j]!=ans[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt=0;
        while(!is_palindrome(n))
        {
            n+=reverse(n);
            cnt++;
        }
        cout<<cnt<<" "<<n<<endl;
    }
    return 0;
}