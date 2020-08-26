// Knapsack Problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll max(ll a, ll b)
{
    if(a<b)
        return b;
    return a;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll val[n], wt[n];
	    int W;
	    cin>>W;
	    for(int i=0;i<n;i++)
	    cin>>val[i];
	    for(int i=0;i<n;i++)
	    cin>>wt[i];
	    int **K = new int*[n+1];
	    for(int i=0;i<=n;i++)
        {
            K[i] = new int[W+1];
        }
        for(int i=0;i<=n;i++)
        {
            for(int w=0;w<=W; w++)
            {
                if(i==0||w==0)
                    K[i][w]=0;
                else if(wt[i-1]<=w)
                {
                    K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
                }
                else
                {
                    K[i][w] = K[i-1][w];
                }
            }
        }
	    cout<<K[n][W]<<endl;
	}
	return 0;
}
