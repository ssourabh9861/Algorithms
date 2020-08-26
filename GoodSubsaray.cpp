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
        string s;
        cin>>s;
        int len = s.length();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j = i;j<n;j++)
            {
                sum+=s[j]-'0';
                if(sum==j-i+1)
                    count++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
