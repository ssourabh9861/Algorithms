// Coeforces 662 C Pinkie Pie Eats Patty-cakes

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
        map<int, int> m;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        vector<int> v;
        for(auto i = m.begin();i!=m.end();i++)
            v.push_back( i->second);
        sort(v.begin(), v.end());
        map<int, int> p ;
        for(auto i = v.begin();i!=v.end();i++)
            p[*i]++;
        int res = 0;
        int len = 0;
        for(auto i = p.begin();i!=p.end();i++)
        {
            if(i->first!=1)
            {
                res = len/(i->first-1);
                res = max(res, i->second-1+res);
            }
            len+=i->second*i->first;
        }
        cout<<res<<endl;
	}
	return 0;
}
