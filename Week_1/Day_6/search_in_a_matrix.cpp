#include<bits/stdc++.h>
using namespace std;
const int Max_V=1e5+5;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    bool is_find=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
               is_find=true;
               break;
            }
        }
    }
    if(is_find==true)
    {
        cout<<"will not take number"<<endl;
    }
    else
    {
        cout<<"will take number"<<endl;
    }
    return 0;
}