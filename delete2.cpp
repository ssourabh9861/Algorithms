#include <bits/stdc++.h>
using namespace std;

// function to find the number of maximum pair sums
int getPairsCount(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int a[n];

    for (int i=0; i<n; i++)
        {
            m[arr[i]] = i;
            a[i] = 0;
        }

    int twice_count = 0;


    for (int i=0; i<n; i++)
    {
        if(a[i]==1)
            continue;
        if(m.find(sum-a[i])!=m.end() && m[sum-a[i]]!=i)
        {
            twice_count++;
            a[i] = 1;
            a[m[sum-a[i]]]=1;
        }


    }

    // return the half of twice_count
    return twice_count;
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
        map<int, int> m;
        for(int i=0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                m[a[i]+a[j]]++;
            }
        }
        int maxm = 0;
        for(auto i = m.begin();i!=m.end();i++)
        {
            int k = getPairsCount(a, n, i->first);
            if(maxm<k)
                maxm = k;
        }
        cout<<maxm<<endl;
	}
	return 0;
}
