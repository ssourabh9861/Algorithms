//High-effort vs. Low-effort

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int hi[n];
	    int lw[n];
	    for(int i=0;i<n;i++)
	    cin>>hi[i];
	    for(int i=0;i<n;i++)
	    cin>>lw[i];
	    int dp[n];
	    dp[0] = lw[0];
	    for(int i=1;i<n;i++)
	    {
	        if(i==1)
	        {
	            dp[1] = max(hi[i], dp[i-1]+lw[i]);
	        }
	        else
	        {
	            dp[i] = max(hi[i] + dp[i-2], dp[i-1] + lw[i]);
	        }
	        cout<<dp[i]<<" ";
	    }
	    cout<<endl;
	    cout<<dp[n-1]<<endl;

	}
	return 0;
}
