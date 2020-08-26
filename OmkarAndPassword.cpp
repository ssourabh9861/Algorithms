//Codeforces Global round 10

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
        map<int, int, greater<int>> m;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        int size = n;
        while(n>0)
        {
            int a = -1,b=-1;
            int p = 0;
            for(auto i= m.begin();i!=m.end();i++)
            {
                if(i->second==0)
                    continue;
                if(p)
                a = i->first;
                else
                    b = i->first;
                p=!p;
            }
            if(a==-1||b==-1)
                break;
            m[a+b]++;
            m[a]--;
            m[b]--;
            n--;
        }
        cout<<n<<endl;
	}
	return 0;
}
