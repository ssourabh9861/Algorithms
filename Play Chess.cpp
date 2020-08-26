//Codeforces 664

#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long
void printrev(int a, int n)
{
    for(int i=n;i>0;i--)
        cout<<a<<" "<<i<<endl;
}
void print(int a, int n)
{
    for(int i=1;i<=n;i++)
        cout<<a<<" "<<i<<endl;
}
int main()
{
	int m, n;
	cin>>m>>n;
	int sx, sy;
	cin>>sx>>sy;
    for(int i=sy;i>0;i--)
        cout<<sx<<" "<<i<<endl;
    for(int i=sy+1;i<=n;i++)
        cout<<sx<<" "<<i<<endl;
    int c = 0;
    for(int i=sx-1;i>0;i--)
    {
        if(c==0)
            printrev(i, n);
        else
            print(i, n);
            c=!c;
    }
    for(int i=sx+1;i<=m;i++)
    {
        if(c==0)
            printrev(i, n);
        else
            print(i, n);
            c=!c;
    }
	return 0;
}
