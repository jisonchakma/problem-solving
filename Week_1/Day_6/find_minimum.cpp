#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int min;
    int count=0;
    int flag=1;
    vector<int>a(n);
    for(int i=1;i<=n;i++)
    {
        int value;
        cin>>value;
        if(flag)
        {
            min=value;
            flag=0;
        }
        else
        {
            if(value<min)
            {
            min=value;
            }
        }
        count++;
        if(count==k||i==n)
        {
            cout<<min<<" ";
            flag=1;
            min=0;

            count=0;
        }
    }
    return 0;
}