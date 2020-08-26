#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long

int main()
{
	int r,g,b;
        cin>>r>>g>>b;
        vector<int> cr, cg, cb;
        for(int i=0;i<r;i++)
        {
            int x;
            cin>>x;
            cr.push_back(x);
        }
        for(int i=0;i<g;i++)
        {
            int x;
            cin>>x;
            cg.push_back(x);
        }
        for(int i=0;i<b;i++)
        {
            int x;
            cin>>x;
            cb.push_back(x);
        }
        sort(cr.begin(), cr.end(), greater<int>());
        sort(cg.begin(), cg.end(), greater<int>());
        sort(cb.begin(), cb.end(), greater<int>());
        int i = 0, j = 0, k = 0;
        ll area = 0;
        while((i<r)+(j<g)+(k<b)>1)
        {
            if(i>=r )
            {
                area+=cg[j]*cb[k];
                j++; k++;
            }
            else if(j>=g)
            {
                area+=cr[i]*cb[k];
                i++;k++;
            }
            else if(k>=b)
            {
                area+=cr[i]*cg[j];
                i++;j++;
            }
            else if(max(cr[i], max(cg[j], cb[k]))==cr[i])
            {
                if(max(cg[j], cb[k])==cg[j])
                {
                    area+=cg[j]*cr[i];
                    j++;
                    i++;
                }
                else
                {
                    area+=cr[i]*cb[k];
                    i++, k++;
                }
            }
            else if(max(cr[i], max(cg[j], cb[k]))==cg[j])
            {
                if(max(cr[i], cb[k])==cr[i])
                {
                    area+=cg[j]*cr[i];
                    j++;
                    i++;
                }
                else
                {
                    area+=cg[j]*cb[k];
                    j++, k++;
                }
            }
            else {
                if(max(cg[j], cr[i])==cg[j])
                {
                    area+=cg[j]*cb[k];
                    j++;
                    k++;
                }
                else
                {
                    area+=cr[i]*cb[k];
                    i++, k++;
                }
            }
        }
        cout<<area<<endl;
	return 0;
}
