#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char grid[10][10];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>grid[i][j];
            }
        }
        pair<int,int>loc;
        for(int i=1;i<7;i++)
        {
            for(int j=1;j<7;j++)
            {
              if(grid[i-1][j-1]=='#'&&grid[i-1][j+1]=='#'&&grid[i+1][j-1]=='#'&&grid[i+1][j+1]=='#'
               )
               {
                loc.first=i+1;
                loc.second=j+1;

               }
            }

        }
        cout<<loc.first<<" "<<loc.second<<endl;
        
    }
    return 0;
}