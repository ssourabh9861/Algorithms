// Minimum coins

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void change(int **a, int v[], int j, int index, int m)
{
    for(int i=0;i<m;i++)
    {
        if(i==index)
            a[j][i] = 1+a[j-v[index]][i];
        else
        a[j][i] = a[j-v[index]][i];
    }
}
int main()
 {
	int t;
	cin>>t;
	int v[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int m = sizeof(v)/sizeof(v[0]);
	while(t--)
	{
	    int n;
	    cin>>n;
	    int **a = new int*[n+1];
	    int x[n+1];
	    x[0] = 0;
	    for(int i=0;i<=n;i++)
            a[i] = new int[m];
	    for(int i=0;i<=n;i++)
        {
            int p=0, maxm=INT_MAX;
            int index = -1;
            for(int j=0;j<m;j++)
            {
                if(i==0)
                    a[i][j] = 0;
                else if(i-v[j]>=0)
                {
                    p = 1+ x[i-v[j]];
                    if( maxm>p)
                    {
                        maxm = p;
                        index = j;
                    }
                }
            }
            if(i!=0)
            {
                x[i] = maxm;
                change(a,v, i, index, m);
            }

        }
        for(int i=m-1;i>=0;i--)
        {
            for(int j=a[n][i];j>0;j--)
                cout<<v[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
