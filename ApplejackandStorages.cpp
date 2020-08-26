// Codeforces 662 Bs
#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long
void check(map<int, int> m)
{
    int p = 1;
    for(auto i = m.begin();i!=m.end();i++)
    {
        if(i->second%2==1)
        {
            p=0;
        }
    }
    if(p)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{

    int n;
    cin>>n;
    map<int, int> m;
    int x;
    for(int i=0;i<n;i++)
    {

        cin>>x;
        m[x]++;
    }
    char c;
    int n1, q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>c;
        cin>>n1;
        if(c=='-')
            m[n1]--;
        if(c=='+')
            m[n1]++;
        check(m);
    }


	return 0;
}
