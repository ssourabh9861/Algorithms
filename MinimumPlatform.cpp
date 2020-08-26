//Minimum Platforms

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long
struct Interval
{
    int start;
    int finish;
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int s[n], f[n];
        for(int i=0;i<n;i++)
        cin>>s[i];
        for(int i=0;i<n;i++)
        cin>>f[i];
        sort(s, s+n);
        sort(f, f+n);
        int i=0, j=0;
        int count = 0;
        int maxl = 0;
        while(i<n && j<n)
        {
            if(s[i]<=f[j])
            {
                count++;
                i++;
            }
            else
            {
                count--;
                j++;
            }
            if(maxl<count)
                maxl = count;
        }
        cout<<maxl<<endl;
	}
	return 0;
}
