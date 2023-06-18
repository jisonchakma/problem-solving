#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>om(n);
	    vector<int>addy(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>om[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>addy[i];
	        
	    }
	    int om_count=0;
	    int addy_count=0;
	    int om_max_count=0;
	    int addy_max_count=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(om[i]!=0)
	        {
	           // om_count=0;
               // om_max_count=max(om_max_count,om_count);
               // om_count=0;
               om_count++;
	        }
	        else
            {
               // om_max_count=max(om_max_count,om_count);
                om_count=0;

            }
            om_max_count=max(om_max_count,om_count);
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(addy[i]!=0)
	        {
               // addy_max_count=max(addy_max_count,addy_count);
                addy_count++;
             }
	        else
            {
                addy_count=0;

            }
            addy_max_count=max(addy_max_count,addy_count);
	        
	    }
	    if(om_max_count>addy_max_count)
	    {
	        cout<<"Om"<<endl;
	    }
	    else if(addy_max_count>om_max_count)
	    {
	        cout<<"Addy"<<endl;
	    }
	    else
	    {
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}