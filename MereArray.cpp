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
        int a[n];
        int min = INT_MAX;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
                min = a[i];
        }
        int b[n];
        vector<int> c;
        for(int i=0;i<n;i++)
        {
            if(a[i]%min==0)
            {
                b[i]=1;
                c.push_back(a[i]);
            }
            else
                b[i] = 0;
        }
        sort(c.begin(),c.end());
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                a[i] = c[k];
                k++;
            }
        }
        int p=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                cout<<"NO"<<endl;
                p=0;
                break;
            }
        }
        if(p)
        cout<<"YES"<<endl;
	}
	return 0;
}
