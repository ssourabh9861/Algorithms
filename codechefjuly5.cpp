#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int, pair<int,int>> m;
        int p;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            m[p].first++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>p;
            m[p].second++;
        }
        map<int, int> mx;
        map<int, int> my;
        int x=0, y=0;
        int cost=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            cout<<i->first<<" : "<<i->second.first<<"  "<<i->second.second<<endl;
            if(i->second.first+i->second.second%2==1)
            {
                cost = -1;
                break;
            }
            if(i->second.first>i->second.second)
            {
                mx[i->first]=(i->second.first-i->second.second)/2;
                x+=mx[i->first];
            }
            if(i->second.first<i->second.second)
            {
                my[i->first] = (i->second.second-i->second.first)/2;
                y+=my[i->first];
            }
        }
        if(x!=y || cost==-1)
        {
            cout<<"-1"<<endl;
        }
        else{
            auto itr1 = mx.begin();
            auto itr2 = my.rbegin();
            while(itr1!=mx.end() && itr2!=my.rend())
            {
                if(itr1->second>itr2->second)
                {
                    cost+= min(itr1->first, itr2->first)*itr2->second;
                    itr1->second-=itr2->second;
                    itr2++;
                }
                else if( itr1->second<itr2->second)
                {
                    cost+= min(itr1->first, itr2->first)* itr1->second;
                    itr2->second-=itr1->second;
                    itr1++;
                }
                else
                {
                    cost+= min(itr1->first, itr2->first)* itr1->second;
                    itr2++;
                    itr1++;
                }
            }
            cout<<cost<<endl;
        }
    }
}
