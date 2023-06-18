#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k<=log2(n))
        {
            cout<<(int)pow(2,k)<<endl;
        }
        else
        {
            cout<<n+1<<endl;
        }
    }
    return 0;
}