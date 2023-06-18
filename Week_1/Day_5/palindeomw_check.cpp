#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n,sum=0;
    int r;

    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<sum<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<sum<<endl;
        cout<<"NO"<<endl;
    }
    return 0;

}