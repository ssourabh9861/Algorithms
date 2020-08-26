// Codeforces 661 C

#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int a[n] ;
    for (int i=0; i<n; i++)
    {
        m[arr[i]]++;
        a[i] = 0;
    }

    int t = 0;

    for (int i=0; i<n; i++)
    {
        if(m.find(sum-arr[i])!=m.end() && m[arr[i]]!=0 && m[sum-arr[i]]!=0 )
        {
            t++;
            m[arr[i]]--;
            m[sum-arr[i]]--;
            if(m[arr[i]]==-1)
                t--;
        }

    }

    return t;
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
        if(n==0 || n==1)
            return 0;
        sort(a, a+n);
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
            //cout<<"sum for "<<i->first<<" is "<<k<<endl;
            if(maxm<k)
                maxm = k;
        }
        cout<<maxm<<endl;
	}
	return 0;
}
