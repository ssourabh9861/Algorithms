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
        string s1="";
        for(int i=0;i<2*n-1;i++)
        {
            if(i%2==0)
                s1 = s1+s[i];
        }
        cout<<s1<<endl;

	}
	return 0;
}
