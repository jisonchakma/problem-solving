#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int first_sum=0;
        int last_sum=0;
        for(int i=0;i<6;i++)
        {
            if(i<3)
            {
                first_sum+=(s[i]-'0');
            }
            else
            {

              last_sum+=(s[i]-'0');
            }
        }
       // cout<<first_sum<<" "<<last_sum<<endl;
        if(first_sum==last_sum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
    return 0;
}