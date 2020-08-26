// Leetcode Partition labels

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
        string S;
        cin>>S;
        int a[26];
        for(int i=0;i<26;i++)
            a[i]=-1;
        int b[S.length()];
        for(int i=0;i<S.length();i++)
        {
            if(a[S[i]-'a']==-1)
            {
                b[i] = i;
                a[S[i]-'a'] = i;
            }
            else
            {
                b[i] = a[S[i]-'a'];
            }
            cout<<b[i]<<" ";
        }
        cout<<endl;
        int mini = S.length();
        int count = 0;
        int c[S.length()];
        for(int i=S.length()-1;i>=0;i--)
        {
            if(i<mini)
            {
                count++;
                c[i] = count;
                mini = b[i];
            }
            else{
                if(b[i]<mini)
                    mini = b[i];
                c[i] = count;
            }
        }
        vector<int> res;
        for(int i=0;i<S.length();i++)
        {
            cout<<c[i]<<' ';
        }
	}
	return 0;
}
