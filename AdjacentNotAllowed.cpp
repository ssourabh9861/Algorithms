//Adjacents are not allowed

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
	    int a[2][n];
	    int dp[n];
	    for(int i=0;i<2;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    dp[0] = max(a[0][1], a[0][0]);
	    if(n>=1)
	    dp[1] = max(a[1][0], a[1][1], dp[0]);
	    for(int i=2;i<n;i++)
	    {
	        dp[i] = max(dp[i-1], dp[i-2] + max(a[0][i], a[1][i]));
	    }
	    cout<<dp[n-1]<<endl;
	}

	return 0;
}
