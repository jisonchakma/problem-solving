#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    deque<int>q;
    for(int i=0;i<n;i++)
    {
        q.push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        //cout<<q.front()<<endl;
        if(i%2==0)
        {
            cout<<q.front()<<" ";
            q.pop_front();
        }
        else
        {
            cout<<q.back()<<" ";
            q.pop_back();
        }
    }
    return 0;
}