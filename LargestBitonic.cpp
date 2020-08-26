//Longest Bitonic subsequence

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
        inc[0]=1;
        for(int i=1;i<n;i++)
        {
            inc[i] =1;
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j] && inc[i]<inc[j]+1)
                    inc[i] = inc[j]+1;
            }
        }
        int dec[n];
        dec[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            dec[i] =1;
            for(int j=n-1;j>i;j--)
            {
                if(a[i]>a[j] && dec[i]<dec[j]+1)
                    dec[i] = dec[j]+1;
            }
        }
        int maxm=0;
        for(int i=0;i<n;i++)
        {
            if(inc[i]+dec[i]-1>maxm)
                maxm = inc[i] + dec[i] -1;
        }
        cout<<maxm<<endl;
	}
	return 0;
}
