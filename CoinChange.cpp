//Coin Change

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long
int counts = 0;
int fun(int sum, int a[], int n, int last)
{
    if(sum<0 || last>=n)
        return 0;
    if(sum==0)
    {
        counts++;
        return 1;
    }
    else
    {
        for(int i=last;i<n;i++)
        {
            if(fun(sum-a[i], a, n, i)==0)
               break ;
        }
    }
    return 1;
}

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
        int sum;
        cin>>sum;

        int s[sum+1];
        s[0] =1;
        for(int i=1;i<=sum;i++)
        {
            s[i] = 0;
            for(int j=0;j<n;j++)
            {
                if(i-a[j]>=0)
                    s[i]+=s[i-a[j]];
            }
            cout<<s[i]<<endl;
        }

        cout<<s[sum]<<endl;;
	}
	return 0;
}
