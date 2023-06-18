#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    for(int i=1000;i<=10000;i++)
    {
        int num=i;
        bool visited[10000]={false};
        while(num)
        {
            if(visited[num%10])
            break;
            visited[num%10]=true;
            num=num/10;
        }
        if(num==0)
        {
            a.push_back(i);
        }

    }
    int n;
    cin>>n;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>n)
        {
            cout<<a[i]<<endl;
            break;
        }
        
    }
    return 0;
}