// Maximum difference of zeros and ones in binary string
#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        int len = s.length();
        int dp[len];
        for(int i = 0;i<len;i++)
        {
            if(s[i]==0)
                dp[i]=1;

        }
	}
	return 0;
}
