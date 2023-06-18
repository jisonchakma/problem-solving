#include<bits/stdc++.h>
using namespace std;
/*long long int find_factorial(int n)
{
    if(n<=1)
    return 1;
    return n*find_factorial(n-1);
}
*/
int main()
{
    int t;
    cin>>t;
    //long long fact=1;
    while(t--)
    {
        int n;
        cin>>n;
      // cout<<find_factorial(n)<<endl;
      long long fact=1;
      for(int i=1;i<=n;i++)
      {
        fact*=i;
      }
      cout<<fact<<endl;
      fact=0;

    }
    return 0;
}