#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1="YES",s2="YeS",s3="yes",s4="Yes",s5="YEs",s6="yES",s7="yeS",s8="yEs";
        /*sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());
        sort(s5.begin(),s5.end());
        sort(s6.begin(),s6.end());
        sort(s7.begin(),s7.end());
        sort(s8.begin(),s8.end());
        sort(s.begin(),s.end());
        */
       // cout<<s1<<endl;
        //bool is_find=false;
        if(s==s1||s==s2||s==s3||s==s4||s==s5||s==s6||s==s7||s==s8)
         {
                cout<<"YES"<<endl;
         }
          else
         cout<<"NO"<<endl;

        }
         return 0;
}