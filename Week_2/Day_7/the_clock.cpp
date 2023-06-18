#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        char ch;
        cin>>a>>ch>>b>>x;
        int cnt=0;
        int h=x/60;
        int m=x%60;
        map<string,int>mp;
        for(int i=0;i<=1440;i++)
        {
            int x=a+h;
            int y=b+m;
            if(y>=60)
            x++;
            a=x%24;
            b=y%60;
            string hh,mm;
            hh=to_string(a);
            mm=to_string(b);
            string h1,m1;
            if(hh.size()==1)
            {
                h1+='0';
                h1+=hh[0];
                hh=h1;
            }
            if(mm.size()==1)
            {
                m1+='0';
                m1+=mm[0];
                mm=m1;
            }
            string ans;
            ans=mm;
            ans+=hh;
            if(mp[ans]!=0)
            break;
            reverse(mm.begin(),mm.end());
            if(hh==mm)
            {
                cnt++;
                mp[ans]++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}