//Codeforces 663 B


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
        int m, n;
        cin>>m>>n;
        int a[m][n];
        char c;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
        {
            cin>>c;
            if(c=='R')
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
        int count=0;
        for(int i=m-2;i>=0;i--)
        {
            if(a[i][n-1]==0)
                count++;

        }
        for(int j=0;j<n-1;j++)
            if(a[m-1][j]==1)
            count++;
        cout<<count<<endl;
	}
	return 0;
}
