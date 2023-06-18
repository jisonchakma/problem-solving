#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>freq;
        vector<string>a[3];
        for(int i=0;i<3;i++)
        {
            a[i].resize(n);
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                freq[a[i][j]]++;
            }

        }
        /*for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<freq[a[i][j]]<<" ";
            }
        }
        cout<<endl;
        */
        int ans[3]={0};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(freq[a[i][j]]==1)
                {
                    ans[i]+=3;
                }
                else if(freq[a[i][j]]==2)
                {
                    ans[i]+=1;
                }
            }
        }
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<endl;

    }
    return 0;

}