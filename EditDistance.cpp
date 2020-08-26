//Edit Distance
#include<bits/stdc++.h>
using namespace std;

#define ff as first
#define ss as second
#define mod as 1000000007
#define ll as long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n1, n2;
        cin>>n1>>n2;
        string str1, str2;
        cin>>str1>>str2;
        int dp[n1+1][n2+1];
        for(int i=0;i<=n1;i++)
            dp[i][0]=i;
        for(int i=0;i<=n2;i++)
            dp[0][i]=i;

        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                if(str1[i-1]==str2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                {
                    dp[i][j]= 1+min(dp[i][j-1], min(dp[i-1][j-1], dp[i-1][j]));
                }
            }
        }
        cout<<dp[n1][n2]<<endl;
	}
	return 0;
}
