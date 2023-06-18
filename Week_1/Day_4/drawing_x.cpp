#include<bits/stdc++.h>
using namespace std;
int main()
{

    int r;
    cin>>r;
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<r;j++)
        {
            if(i==j&&i!=r/2&&j!=r/2)
            {
                cout<<"\\";
            }
            else if(i==r/2&&j==r/2)
            {
                cout<<"X";
            }
            else if(j!=r/2 &&i==((r-1)-j))
            {
                cout<<"/";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
