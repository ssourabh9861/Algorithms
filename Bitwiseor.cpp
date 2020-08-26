//Codeforces 664

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long

int main()
{
	int n1, n2;
	cin>>n1>>n2;
	int a[n1];
	int b[n2];

	for(int i=0;i<n1;i++)
        cin>>a[i];
    for(int i=0;i<n2;i++)
        cin>>b[i];
    int sum  = (1<<9)-1;
    for(int i=8;i>=0;i--)
    {
        sum = sum^(1<<i);
        int x = 0;
        for(int j = 0;j<n1;j++)
        {
            int p = 0;
            for(int k = 0;k<n2;k++)
            {
                if(((a[j]&b[k])|sum)==sum)
                {
                    p = 1;
                    break;
                }
            }
            if(p)
                x+=1;
        }

        if(x!=n1)
        sum = sum^(1<<i);
    }
    cout<<sum<<endl;
    return 0;
}
