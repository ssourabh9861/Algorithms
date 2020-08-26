//Codeforces Global Round 10

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <cassert>

std::mt19937 rng((int) std::chrono::steady_clock::now().time_since_epoch().count());

#define ll long long
int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        long long  ans = 0;
        for(int i = 0; i < n-1; i++){
            ans+=max(0, a[i]-a[i+1]);
        }
        cout<<ans<<endl;
	}
	return 0;
}
