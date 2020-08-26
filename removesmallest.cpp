//Codeforces 661 A

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
        if(n==0||n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        map<int, int> m;
        for(int i=0;i<n;i++)
            m[a[i]]++;
            int count = 0;
        vector<int> p;
        for(auto i = m.begin();i!=m.end();i++)
        {
            p.push_back(i->first);
        }
        int k=1;
        for(int i=0;i<p.size()-1;i++)
            if(p[i+1]-p[i]>1)
            {
                cout<<"NO"<<endl;
                k=0;
                break;
            }
        if(k)
            cout<<"YES"<<endl;
	}
	return 0;
}
