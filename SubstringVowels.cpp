#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long


int findTheLongestSubstring(string s) {
    unordered_map<int, int> m{{0, -1}};
    int res = 0, n = s.length(), cur = 0;
    for (int i = 0; i < n; i++) {
        cur ^= 1 << string("aeiou").find(s[i]) + 1 >> 1;
        if (!m.count(cur)) m[cur] = i;
        res = max(res, i - m[cur]);
        cout<<( 1 << string("aeiou").find(s[i]) + 1 >> 1)<<" cur = "<<cur<<" m[curr] ="<<m[cur]<<" res = "<<res<<endl;
    }
    return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        int n = string::npos;
        cout<<n<<endl;
        cout<<findTheLongestSubstring(s)<<endl;
	}
	return 0;
}
