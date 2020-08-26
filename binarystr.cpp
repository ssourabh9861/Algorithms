//Given a number N, find the number of binary strings of length N that contains consecutive 1's in them.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void check(int prev, ll *count, int len, int curr_len, int ch)
{
    if(curr_len==len)
    {
        /*if(ch)
        {
            *count= *count+1;
            cout<<"--"<<endl;
        }*/
        return;
    }

    if(prev)
    {
        int x=1, t=curr_len+1;
        while(t<len)
        {
            x*=2;
            t++;
        }
        *count = *count+ x;
        check(0, count, len, curr_len+1,ch);
    }
    else
    {
        check(0, count, len, curr_len+1, ch);
        check(1, count, len, curr_len+1, ch);
    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll count = 0;
	    check(0,&count,n,1, 0);
	    check(1, &count, n, 1 ,0);
	    cout<<count<<endl;
	}
	return 0;
}
