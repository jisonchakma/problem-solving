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
        string s;
        cin>>s;
        //pair<char,char>pairs;
        //vector<pair<char,char>>v;
        set<pair<char,char>>st;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
          //v.push_back({s[i],s[i+1]});
          pair<char,char>p1=make_pair(s[i],s[i+1]);
          st.insert(p1);
                     
        }

       /* for(int i=0;i<n-1;i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        */
    
       // cout<<cnt<<endl;
        cout<<st.size()-1<<endl;
    }
    return 0;
}