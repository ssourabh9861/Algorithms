// Maximum Increasing Subsequence

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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int dp[n];
        dp[0] = a[0];
        for(int i=0;i<n;i++)
        {
            dp[i] = a[i];
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i] && dp[j] + a[i]>dp[i])
                    dp[i] = dp[j] + a[i];
            }
        }
        int maxm = dp[0];
        for(int i=0;i<n;i++)
            if(maxm<dp[i])
            maxm = dp[i];
        cout<<maxm<<endl;
	}
	return 0;
}
