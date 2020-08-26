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
        map<int,int> a;
        map<int,int> b;
        int x;
        for(int i=0;i<3;i++)
        {
            cin>>x;
            a[i]=x;
        }
        for(int i=0;i<3;i++)
        {
            cin>>x;
            b[i]=x;
        }
        int count = 0;


        if(b[2]!=0)
        {
            x =min(a[0],b[2]);
            b[2]-=x;
            a[0]-=x;
            if(b[2]!=0)
            {
                x = min(a[2],b[2]);
                b[2]-=x;
                a[2]-=x;
            }
        }
        count+=min(b[2],a[1])*(-2);
        count+=min(a[2],b[1])*2;
        cout<<count<<endl;/*

        if(a[2]>0 && b[1]>0)
        {
            check-=min(a[2],b[1]);
            if(a[2]>b[1]>0)
            {
                count =b[1]*2;
                a[2]-=b[1];
                b[1] = 0;
            }
            else{
                count =a[2]*2;
                b[1] -= a[2];
                a[2] = 0;
            }
        }
        if(a[2]>0 && b[1]>0)
        {
            check-=min(a[2],b[1]);
            if(a[2]>b[1]>0)
            {
                count =b[1]*2;
                a[2]-=b[1];
                b[1] = 0;
            }
            else{
                count =a[2]*2;
                b[1] -= a[2];
                a[2] = 0;
            }
        }*/

        }

	return 0;
}
