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
        ll s,f;
        cin>>s>>f;
        ll a,b;
        cin>>a>>b;
        ll wa, wb;
        cin>>wa>>wb;

        if(wa>wb)
        {
            ll temp = wa;
            wa = wb;
            wb = temp;
            temp = a;
            a =b;
            b = temp;
        }
        ll my = 0;
        my += min(s/wa,a);
        a -=my;
        s = s-my*wa;
        ll p=min(s/wb,b);
        my+=p;
        s = s-p*wb;
        b-= p ;
        for(ll i=0;i<b;i++)
        {
            if(wb-wa>s)
                break;
            b--;
            a++;
            s = s-wb+wa;
        }
        ll res = my;
        //cout<<"--myw "<<myw<<" a = "<<a<<" b ="<<b<<"p = "<<p<<endl;
        ll fmy = 0;
        fmy += min(f/wa,a);
        a -= fmy;
        f = f-fmy*wa;
        p= min(f/wb,b);
        fmy+=p;
        f = f-p*wb;
        b-= p ;
        for(ll i=0;i<b;i++)
        {
            if(wb-wa>f)
                break;
            b--;
            a++;
            f= f-wb+wa;
        }
        res += fmy;
        cout<<res<<endl;
	}
	return 0;
}
