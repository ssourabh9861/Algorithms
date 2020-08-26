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
        string s;
        cin>>s;
        int n = s.length();
        vector<int> a;
        int i=  0;
        while(i<n)
        {
            int count =0;
            if(s[i]=='1')
                count++;
            i++;
            while(true)
            {
                if(i>=n)
                    break;
                if(s[i]=='1')
                    count++;
                else
                break;
                i++;
            }
            if(count>0)
            a.push_back(count);
        }
        if(a.empty())
        {
            cout<<"0"<<endl;
            continue;
        }
        sort(a.begin(),a.end(), greater<int>());
        int alice = 0, bob=0;
        for( i=0;i<a.size();i++)
        {
            if(i%2==0)
                alice+=a[i];
        }
        cout<<alice<<endl;
	}
	return 0;
}
