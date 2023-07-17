#include<bits/stdc++.h>
using namespace std;
bool api(vector<int>ap,int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(abs(ap[j]-ap[i])==abs(ap[k]-ap[j]))
                return false;
            }
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
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(api(a,n))
        {
            cout<<"YES"<<endl;

        }
        else
        cout<<"NO"<<endl;

    }
    return 0;
}