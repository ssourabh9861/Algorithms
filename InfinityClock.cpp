//Codeforces Global Round 10

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
        ll n;
        string s;
        cin>>n;
        cin>>s;
        ll a[n];
        ll minm = INT_MAX;
        ll maxm = INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<minm)
                minm = a[i];
            if(a[i]>maxm)
                maxm = a[i];
        }

        ll a1[n];
        for(int i=0;i<n;i++)
        {
            a1[i] = maxm-a[i];
        }
        ll a2[n];
        maxm = maxm-minm;
        for(int i=0;i<n;i++)
            a2[i] = maxm-a1[i];
        int len = s.length();
        if(s[len-1]=='0'||s[len-1]=='2'||s[len-1]=='4'||s[len-1]=='6'||s[len-1]=='8')
        {
            for(int i=0;i<n;i++)
                cout<<a2[i]<<" ";
                cout<<endl;
        }
        else{
            for(int i=0;i<n;i++)
                cout<<a1[i]<<" ";
                cout<<endl;
        }


	}
	return 0;
}
