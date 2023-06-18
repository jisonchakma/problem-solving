#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool is_find=false;
    for(int i=0;i<=10000;i++)
    {
        int sum=a*i;
        for(int j=0;j<=10000;j++)
        {
            if(sum+b*j==c)
            {
                is_find=true;
                break;
                
            }
        }
    }
    if(is_find)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}