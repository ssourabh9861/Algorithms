#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int d,p;
	cin>>p>>d;
	vector<vector<int>> a(p);
	for(int i=0;i<p;i++)
    {
        a[i]= vector<int>(d);
    }
    int x;
	for(int i=0;i<d;i++)
    {
        for(int j=0;j<p;j++)
        {
            cin>>x;
            a[j][i] = x;
        }
    }
    int count=0;
    for(int i=0;i<p;i++)
    {
        sort(a[i].begin(),a[i].end());
        count+=a[i][0];
    }
    cout<<count<<endl;
	return 0;
}
