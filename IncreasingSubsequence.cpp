//Increasing Sub Sequence

#include<bits/stdc++.h>
using namespace std;

#define ff as first
#define ss as second
#define mod as 1000000007
#define ll as long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        int len = s.length();
        int a[len];
        a[0] = 1;
        for(int i=1;i<len;i++)
        {
            a[i]=1;
            for(int j = 0;j<i;j++)
            {
                if(s[i]>s[j] && a[j]+1>a[i])
                {
                    a[i] = a[j]+1;
                }
            }

            //cout<<a[i][0]<<"    "<<a[i][1]<<endl;
        }
        int max=0;
        for(int i=0;i<len;i++)
        {
            if(a[i]>max)
             max = a[i];

        }
        cout<<max<<endl;
	}
	return 0;
}
