#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back

int MAX = (int)1e6 + 1;

vector<int> dp(MAX, -1);
vector<set<int>> G(MAX);
vector<bool> vis(MAX, false);
vector<bool> vis2(MAX, false);
// 7 5
// 3 2 5 4
// 3 1 6 7
// 1 1
// 2 1 2
// 2 6 7
// 6 4 1 4 4 6 6

void dfs(int u, int &m)
{
    if (vis[u])
        return;
    m++;
    vis[u] = 1;
    for (auto v : G[u])
    {
        dfs(v, m);
    }
}

void dfs2(int u, int m)
{
    if (vis2[u])
        return;
    vis2[u] = 1;
    dp[u] = m;
    for (auto v : G[u])
    {
        dfs2(v, m);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int sz;
        cin >> sz;
        int a[sz];
        for (int i = 0; i < sz; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if (i == j)
                    continue;
                G[a[i]].insert(a[j]);
                G[a[j]].insert(a[i]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dp[i] != -1)
        {
            cout << dp[i] << " ";
            continue;
        }
        int k = 0;
        dfs(i, k);
        dfs2(i, k);
        cout << k << " ";
    }
    cout << endl;
    return 0;
}