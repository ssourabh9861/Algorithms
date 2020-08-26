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
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<pair<int,int>> v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                    v.push_back(make_pair(i,j));
            }
        }
        int count = 0;
        for(int i =0;i<v.size();i++)
        {
            int x = v[i].first;
            int y = v[i].second;
            for(auto j = i+1;j<v.size();j++)
            {
                if(x<v[j].first  && y>v[j].first && y<v[j].second)
                    count++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
