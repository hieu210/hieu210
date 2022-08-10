#include <bits/stdc++.h>
using namespace std;
vector<int> dinh[2005];
int v,e,u;
   bool vs[2005];
void chuyen(){
        for(int i=0;i<e;i++){
            int x,y;
            cin >> x>> y;
            dinh[x].push_back(y);
            // dinh[y].push_back(x);
        }
    }
void dfs(int a)
{
    cout << a << " ";
    vs[a] = true;
    for (auto i : dinh[a])
    {
        if (!vs[i])
        { 
            dfs(i);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for(int i=0;i<2005;i++)
        dinh[i].clear();
    memset(vs, false, sizeof(vs)); 
        cin >> v>> e >> u;
        chuyen();
        dfs(u);
        cout << endl;
    }
}