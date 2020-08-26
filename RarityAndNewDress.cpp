//Codeforce 662 D

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long

int main()
{
    int m, n;
    cin>>m>>n;
    char a[m][n];
    int dp[m][n];
    for(int i=0;i<m;i++)
        for(int j = 0;j<n;j++)
        {
            cin>>a[i][j];
            dp[i][j] = 1;
        }
    int count = m*n;
    int temp = 1, k=1;
    while(temp !=0)
    {
        temp = 0;
        for(int i=0;i<m;i++)
        {

            for(int j=0;j<n;j++)
            {
                if(i-k>=0 && i+k<m && j-k>=0 &&  j+k<n)
                {
                    if(k==1)
                    {
                        if( dp[i][j]==k && a[i-k][j]==a[i][j] && a[i+k][j]==a[i][j]&& a[i][j-k]==a[i][j] && a[i][j+k]==a[i][j] )
                        {
                            dp[i][j] = k+1;
                            temp++;
                        }
                    }
                    else if(dp[i][j] == k && dp[i-1][j]>=k && dp[i+1][j]>=k && dp[i][j-1]>=k && dp[i][j+1]>=k)
                    {
                        dp[i][j] = k+1;
                        temp++;
                    }
                }
            }
        }
        k++;
        if(temp==0)
            break;
        else
            count+=temp;
    }
    cout<<count<<endl;
	return 0;
}
