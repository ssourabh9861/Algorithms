// Max Sum Contiguous Array

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long

int maxSum(int a[], int n)
{
    int max_so_far = INT_MIN, max_end_here = 0;
    for(int i=0;i<n;i++)
    {
        max_end_here = max_end_here + a[i];
        if(max_so_far<max_end_here)
            max_so_far = max_end_here;
        if(max_end_here<0)
            max_end_here = 0;
    }
    return max_so_far;
}

int main()
{
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    cout<<maxSum(a, t);
	return 0;
}
