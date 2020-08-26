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
        vector<char> p ;
        int arr[n];
        int k = 0;
        p.push_back(a[0]);
        stack<int> zero;
        stack<int> one;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                if(zero.empty())
                {
                    k++;
                    arr[i] = k;
                }
                else{
                    arr[i] = zero.top();
                    zero.pop();
                }
                one.push(arr[i]);
            }
            if(a[i]=='0')
            {
                if(one.empty())
                {
                    k++;
                    arr[i] = k;
                }
                else{
                    arr[i] = one.top();
                    one.pop();
                }
                zero.push(arr[i]);
            }

        }
        cout<<k<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
	}
	return 0;
}
