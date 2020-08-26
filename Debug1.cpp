//Coin Change

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long

int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	int a[26];
	for(int i=0;i<26;i++)
        a[i] = 0;
	for(int i=0;i<s.length();i++)
        a[s[i]-'a']++;

    int pairs = 0, single = 0;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2==1)
            single++;
        pairs+=a[i]/2;
    }
    cout<<"length= "<<s.length()<<endl;
    cout<<"single = "<<single<<"  pairs = "<<pairs<<endl;
    for(int i = 0;i<26;i++)
        if(a[i]!=0)
        cout<<(char)('a'+i)<<"="<<a[i]<<"   ";

	return 0;
}
