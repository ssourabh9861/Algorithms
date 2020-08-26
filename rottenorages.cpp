//Rotten Oranges

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
        int r,c;
        cin>>r>>c;
        int a[r][c];
        int c1=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                    c1++;
            }
        }
        int time=0;
        int prev=c1;
        int check=1;
        int x=2;
        while(c1!=0)
        {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(a[i][j]==x)
                    {
                        if(i!=0)
                        {
                            if(a[i-1][j]==1)
                            {
                                a[i-1][j]=x*2;
                                c1--;
                            }
                        }
                        if(i!=r-1)
                        {
                            if(a[i+1][j]==1)
                            {
                                a[i+1][j]=x*2;
                                c1--;
                            }
                        }
                        if(j!=0)
                        {
                            if(a[i][j-1]==1)
                            {
                                a[i][j-1]=x*2;
                                c1--;
                            }
                        }
                        if(j!=c-1)
                        {
                            if(a[i][j+1]==1)
                            {
                                a[i][j+1]=x*2;
                                c1--;
                            }
                        }
                    }
                }
            }
            x*=2;
            if(c1==prev)
            {
                check=0;
                break;
            }
            prev=c1;
            time++;
        }
        if(check)
        cout<<time<<endl;
        else
            cout<<"-1"<<endl;
	}
	return 0;
}
