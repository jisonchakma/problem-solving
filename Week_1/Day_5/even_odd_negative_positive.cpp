#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    /*for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    */
    int even_count=0,odd_count=0,pos_count=0,neg_count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        even_count++;
        else
        odd_count++;
        if(a[i]>0)
        {
            pos_count++;
        }
        else if(a[i]<0)
        {
         neg_count++;
        }
    }
    cout<<"Even"<<": "<<even_count<<"\n"<<"Odd"<<": "<<odd_count<<"\n"<<"Positive"<<": "<<pos_count<<"\n"<<"Negative"<<": "<<neg_count<<endl;
    return 0;
}