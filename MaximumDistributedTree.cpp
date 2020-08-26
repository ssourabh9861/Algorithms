#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define mod 1000000007
#define ll long long
vector<int> s;
int n;
void contribution(int node, int& ans, int vis[], int subtree_size[],vector<int> tree[])
{

    // Mark current node as visited
    vis[node] = true;

    // For every adjacent node
    for (int child : tree[node]) {

        // If it is not already visisted
        if (!vis[child]) {
            s.push_back((subtree_size[child]
                    * (n - subtree_size[child])));
            contribution(child, ans,vis,subtree_size, tree);
        }
    }
}

int dfs(int node, int vis[],int subtree_size[],vector<int> tree[])
{

    // Mark visited
    vis[node] = 1;
    subtree_size[node] = 1;

    // For every adjacent node
    for (auto child : tree[node]) {

        // If not already visited
        if (!vis[child]) {

            // Recursive call for the child
            subtree_size[node] += dfs(child, vis, subtree_size, tree);
        }
    }
    return subtree_size[node];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        cin>>n;
	    vector<int> tree[n];
        int x,y;
        for(int i=0;i<n-1;i++)
        {
            cin>>x>>y;
            tree[x-1].push_back(y-1);
            tree[y-1].push_back(x-1);
        }
        int p;
        cin>>p;
        vector<ll> pf;
        ll temp[p];
        for(int i=0;i<p;i++)
        {
            cin>>temp[i];
        }
        sort(temp,temp+p);
        int q = n-1;
        if(p<q)
        {
            for(int i=0;i<q-p;i++)
                pf.push_back(1);
            for(int i=0;i<p;i++)
            {
                pf.push_back(temp[i]);
            }
        }
        else
        {
            for(int i=0;i<q-1;i++)
            {
                pf.push_back(temp[i]);
            }
            ll c = 1;
            for(int i=q-1;i<p;i++)
                c= (c*temp[i]) % mod;
            pf.push_back(c);
        }
        /*for(int i=0;i<q;i++)
        {
            cout<<pf[i]<<" ";
        }
        cout<<endl;
        cout<<"------"<<endl;*/
        int subtree_size[n];
        int vis[n];

        memset(vis, 0, sizeof(vis));
        dfs(0,vis,subtree_size, tree);

        // Second pass
        int ans = 0;
        memset(vis, 0, sizeof(vis));
        s.clear();
        contribution(0, ans, vis, subtree_size, tree);
        sort(s.begin(),s.end());
        int r = 0;
        ll sum=0;
        for(auto  i = s.begin();i!=s.end();i++)
        {
            //cout<<*i<<" ";
            sum+=(*i*pf[r])%mod;
            r++;
        }
        cout<<sum<<endl;
	}
	return 0;
}
