// LongestIncreasing Subsequence

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
            cin>>a[i];
        int dp[n];
        for(int i=0;i<n;i++)
        {
            dp[i] = 1;
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i] && dp[j]+1>dp[i])
                    dp[i] = dp[j]+1;
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
