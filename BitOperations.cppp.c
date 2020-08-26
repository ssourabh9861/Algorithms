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
    vector<vector<int>> v;
    for(int i=0;i<9;i++)
    {
        vector<int> temp;
        v.push_back(temp);
    }
    int x = 1<<8;
    for(int i=0;i<n2;i++)
    {
        for(int j=8;j>=0;j--)
        {
            x = 1<<j;
            int k = x&b[i];
            if(k)
            {
                continue;
            }
            else{
                v[j].push_back(b[i]);
            }
        }
    }
    int sum=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=8;j>=0;j--)
        {
            x = 1<<j;
            int k = x& a[i];
            if(k)
            {
                if(!v[j].empty())
                {
                    continue;
                }
                else
                {
                    sum = sum|x;
                }
            }
        }

    }
    cout<<sum<<endl;
	return 0;
}
