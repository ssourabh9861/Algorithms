// Subset Sum

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
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        sum = sum/2;
        bool subset[n + 1][sum + 1];

        // If sum is 0, then answer is true
        for (int i = 0; i <= n; i++)
            subset[i][0] = true;

        // If sum is not 0 and set is empty,
        // then answer is false
        for (int i = 1; i <= sum; i++)
            subset[0][i] = false;

        // Fill the subset table in botton up manner
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (j < a[i - 1])
                    subset[i][j] = subset[i - 1][j];
                if (j >= a[i - 1])
                    subset[i][j] = subset[i - 1][j]
                                   || subset[i - 1][j - a[i - 1]];
            }
        }
        if(subset[n][sum])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
