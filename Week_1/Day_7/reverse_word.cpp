#include<bits/stdc++.h>
using namespace std;
void  reverse_word(string &st,int s,int e)
{
    while(s<e)
    {
        swap(st[s],st[e]);
        s++;
        e--;
    }
}
string reverse_string(string str)
{
    int sz=str.length();
    int st=0;
    for(int i=0;i<=sz;i++)
    {
        char ch=str[i];
        if(ch==' '||i==sz)
        {
            int lst=i-1;
            reverse_word(str,st,lst);
            st=i+1;
        }
    }
    return str;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<reverse_string(s)<<endl;
    return 0;


}