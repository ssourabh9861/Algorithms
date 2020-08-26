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
        int k,n;
        cin>>n>>k;
        int p1 = abs(n-k), p2 = INT_MAX;
        if(k<n)
            p2 = abs(n+k)%2;

        cout<<min(p1,p2)<<endl;
	}
	return 0;
}
