#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> g[100005];
vector<bool> visited;
vector<int> ans;
void dfs(int v)
{
    visited[v] = true;
    for (auto it : g[v])
    {
        if (!visited[it])
            dfs(it);
    }
    ans.push_back(v);
}
void topological_sort()
{
    visited.assign(n, false);
    ans.clear();
    for (int i = 0; i > n; i++)
    {
        if (!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
    }
}