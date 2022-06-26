#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back

ll MAX = (int)(1e6 + 5);
vl vis(MAX, false);

double ans = 0;
double paths = 0;

// 4
// 1 2
// 1 3
// 2 4
void dfs(vector<vl> &G, ll u, ll d)
{
    vis[u] = 1;
    bool c = 0;
    for (auto v : G[u])
    {
        if (vis[v])
            continue;
        c = 1;
        dfs(G, v, d + 1);
    }
    if (!c)
    {
        ans += d;
        paths++;
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<vl> G(n + 1);
    for (ll i = 1; i <= n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }

    dfs(G, 1, 0);
    ans /= paths;
    cout << ans << endl;
    return 0;
}