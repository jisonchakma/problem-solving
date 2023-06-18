#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int i=0,j=0;
    int mx=INT_MIN;
    while(j<n)
    {
        if(a[j]<0)
        {
            continue;
        }
        sum+=a[j];
        if(j<k-1)
        {
            j++;
        }
        else
        {
            mx=max(mx,sum);
            if(a[i]<0)
            {
                continue;
            }
            sum-=a[i];
            i++;
            j++;

        }

    }
    cout<<mx<<endl;
    return 0;
}