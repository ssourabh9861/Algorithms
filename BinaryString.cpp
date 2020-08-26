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
        string s;
        cin>>s;
        int x;
        cin>>x;
        vector<int> a;
        string s1 = "";
        for(int i=0;i<s.length();i++)
        {
            a.push_back(0);
            s1=s1+'1';
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                if(i+x<s.length())
                    s1[i+x]='0';
                if(i>=x)
                    s1[i-x]='0';
            }
        }
        int check=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                int p = 0;
                if(i-x>=0 && s1[i-x]=='1')
                    p=1;
                if(i+x<s.length() && s1[i+x]=='1')
                    p=1;
                if(p==0)
                {
                    check = 0;
                    break;
                }
            }
        }
        if(check)
            cout<<s1<<endl;
        else
            cout<<"-1"<<endl;
        /*string s1 = "";
        for(int i=0;i<s.length();i++)
        {
            if(a[i]==0)
                s1 = s1+'0';
            else
                s1 = s1+ '1';
        }*/
	}
	return 0;
}
