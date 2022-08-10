#include <bits/stdc++.h>
using namespace std;
int v, e, n, m;
vector<int> dinh[2005];
int parent[2005];
bool visited[2005];
void chuyen()
{
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        dinh[x].push_back(y);
        // dinh[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
}
void bfs(int u, int v)
{
queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int top = q.front();
        visited[top] = true;
        q.pop();
        if (top == v)
            return;
        for (auto i : dinh[top])
        {
            if (!visited[i])
            {
                parent[i] = top;
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
void trace(int u, int v)
{
    vector<int> path;
    if (!visited[v])
    {
        cout << "-1\n";
        return;
    }
    else{
    while (u != v)
    {
        if (u == 0)
        {
            cout << "-1\n";
            return;
        }
        path.push_back(v);
        v = parent[v];
    }
    path.push_back(v);
    reverse(path.begin(), path.end());
    for (auto it : path)
    {
        cout << it << " ";
    }
    cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> n >> m;
        for (int i = 0; i < 2005; i++)
        {
            dinh[i].clear();
        }
        chuyen();
        bfs(n, m);
        trace(n, m);
    }
}