#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,q;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        cin>>q;
        while(q--)
        {
            int x;
            cin>>x;
            auto it1=lower_bound(a.begin(),a.end(),x);
            auto it2=upper_bound(a.begin(),a.end(),x);
            int id1=it1-a.begin();
            int id2=it2-a.begin();
            if(id1==0)
            cout<<"X"<<" ";
            else
            cout<<a[id1-1]<<" ";
            if(id2==n)
            cout<<"X"<<endl;
            else
            cout<<a[id2]<<endl;
       }
       return 0;
}