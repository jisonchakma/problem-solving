#include<bits/stdc++.h>
using namespace std;
const int Max_N=1e9+9;
//int a[Max_N][Max_N];
int main()
{
    int N,M;
    cin>>N>>M;
    int a[N][M],mirror[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>a[i][j];
        }
    }
    /*
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    */
   for(int i=0;i<N;i++)
   {
     for(int j=0;j<M;j++)
     {
        mirror[i][j]=a[i][M-1-j];
     }
   }
   for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<mirror[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}