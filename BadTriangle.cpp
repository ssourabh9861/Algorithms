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
        if(a[0] + a[1] <=a[n-1])
            cout<<"1"<<" "<<"2"<<" "<<n<<endl;
        else
            cout<<"-1"<<endl;

	}
	return 0;
}
