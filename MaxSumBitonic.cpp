//Maximum Sum Bitonic Subsequence

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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int inc[n];
        inc[0]=a[0];
        for(int i=1;i<n;i++)
        {
            inc[i] =a[i];
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j] && inc[i]<inc[j]+a[i])
                    inc[i] = inc[j]+a[i];
            }
        }
        int dec[n];
        dec[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            dec[i] =a[i];
            for(int j=n-1;j>i;j--)
            {
                if(a[i]>a[j] && dec[i]<dec[j]+a[i])
                    dec[i] = dec[j]+a[i];
            }
        }
        int maxm=0;
        for(int i=0;i<n;i++)
        {
            if(inc[i]+dec[i]-a[i]>maxm)
                maxm = inc[i] + dec[i] -a[i];
        }
        cout<<maxm<<endl;
	}
	return 0;
}
