// Shortest Common Subsequence

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int shortestCommonSupersequence(char* , char*, int, int );

int main()
{
    int t;
    char X[10001], Y[10001];
    cin >> t;
    while(t--){
	cin >> X >> Y;
	cout << shortestCommonSupersequence(X, Y, strlen(X), strlen(Y))<< endl;
    }
	return 0;
}

// } Driver Code Ends


//User function template for C++

// X : 1st given string of size m
// Y : 2nd given string of size n
int shortestCommonSupersequence(char* X, char* Y, int m, int n) {
    int a[m+1][n+1];

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            a[i][j] = max( i, j);
            else
            {
                if(X[i-1]==Y[j-1])
                {
                    a[i][j] = min(1+a[i-1][j-1],min(1 + a[i][j-1], 1 + a[i-1][j]));
                }
                else
                a[i][j] = min(1 + a[i][j-1], 1+a[i-1][j]);
            }
        }
    }
    /*for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }*/

    return a[m][n];
}
