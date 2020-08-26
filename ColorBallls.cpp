//Codeforces 664

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
        int r, g, b, w;
        cin>>r>>g>>b>>w;
        int x = r%2 + g%2+ b%2 + w%2;
        if(x<=1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else{
            if(r>0 && g>0 && b>0)
            {
                r=r-1;g=g-1;b=b-1;w=w+1;
                x = r%2 + g%2+ b%2 + w%2;
                if(x<=1)
                    cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }


	}
	return 0;
}
