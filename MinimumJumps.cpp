//Minimum Jumps

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int minimumJumps(int[], int);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        cout<<minimumJumps(arr, n)<<endl;    // Function to calculate minimum number of jumps
    }
    return 0;
}// } Driver Code Ends


// function to find minimum number of jumps to reach end of the array  1 3 5 8 9 2 6 7 6 8 9
int minimumJumps(int arr[], int n){

    if(n==1 || n==0)
        return 0;
    int a[n];
    a[n-1] = 0;
    for(int i=n-2;i>=0;i--)
    {
        a[i]=-1;
        for(int j=1;j<=arr[i];j++)
        {
            if(i+j>=n)
                continue;
            if( i+j==n-1 || a[i+j]!=-1)
            {
                if(a[i]==-1)
                    a[i] = a[i+j]+1;
                else
                a[i] = min(a[i], a[i+j]+1);
            }
        }
    }
    /*for(int i=0;i<n;i++)
        cout<<a[i]<<" ";*/
    return a[0];

}
