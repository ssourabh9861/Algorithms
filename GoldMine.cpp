//Gold Mine Problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int a[m][n];
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    int b[m][n];
	    for(int j=n-1;j>=0;j--)
	    {
	        for(int i=0;i<m;i++)
	        {
	            b[i][j] = a[i][j];
	            if(j<n-1)
	            {
	                int x=0,y=0,z=b[i][j+1];
	                if(i-1>=0)
	                x = b[i-1][j+1];
	                if(i+1<=m-1)
	                y = b[i+1][j+1];
	                //cout<<"i ="<<i<<" j="<<j<<"  x="<<x<<"  y="<<y<<"  z="<<z<<" value is ";
	                b[i][j] = b[i][j]+ max(x,max(y,z));
	                //cout<<b[i][j]<<endl;
	            }
	        }
	    }
	    int maxm=0;
	    for(int i=0;i<m;i++)
	    {
	        if(b[i][0]>maxm)
	        maxm = b[i][0];
	        //cout<<b[i]<<endl;
	    }
	    cout<<maxm<<endl;
	}
	return 0;
}
