#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
        int dp[n];
        dp[0] = a[0];
        int maxm = a[0];
        for(int i=1;i<n;i++)
        {
            dp[i] = a[i];
            if(dp[i-1] + a[i]>dp[i])
                dp[i] = dp[i-1] + a[i];
            if(maxm < dp[i])
                maxm = dp[i];
        }
        cout<<maxm<<endl;
	}
	return 0;
}
