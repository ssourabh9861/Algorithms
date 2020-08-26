//Codeforces 661 D

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
        string a;
        cin>>a;
        vector<string> p ;
        int arr[n];
        int k = 1;
        if(n==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        string temp(1, a[0]);
        string temp2;
        p.push_back(temp);
        arr[0] = 1;
        for(int i=1;i<n;i++)
        {
            int r = 1;
            for(int j=0;j<p.size();j++)
            {
                if(a[i]!=p[j][p[j].length()-1])
                {
                    r=0;
                    arr[i] = j+1;
                    temp2 = p[j] + a[i];
                    p[j] = temp2;
                    break;
                }
            }
            if(r)
            {
                k++;
                temp[0] =a[i];
                p.push_back(temp);
                arr[i] = k;
            }
        }
        cout<<k<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
	}
	return 0;
}
