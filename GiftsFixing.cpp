//Codeforces 661 B

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
        int n;
        cin>>n;
        ll a[n];
        ll b[n];
        int mino=INT_MAX;
        int minc = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<minc)
                minc = a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]<mino)
                mino =b[i];
        }
        ll steps = 0;
        for(int i=0;i<n;i++)
        {
            int x = a[i]-minc;
            int y = b[i]-mino;
            steps+=max(x, y);
        }
        cout<<steps<<endl;

	}
	return 0;
}
