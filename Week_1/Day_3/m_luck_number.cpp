#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int nxt=0;
    bool is_possible=false,stop=true;
    int divide,total=0;
    for(int i=a;i<=b;i++)
    {
        divide=i;
        total=i;
        while(divide>0)
        {
           // bool is_possiblbe=false;
           nxt=divide%10;
            divide/=10;
            if(nxt==4||nxt==7)
            {

                is_possible=true;
                if(divide==0)
                {
                stop=false;
                cout<<total<<" ";
                }
            }
            else
            {
                is_possible=false;
                break;
            }
        }
    }
    if(is_possible==false&&stop==true)
    {
    cout<<-1<<endl;
    }
    return 0;
}