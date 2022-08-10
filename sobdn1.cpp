#include <bits/stdc++.h>
using namespace std;
vector<string> res;
long long n;
void sing()
{
    queue<string> q;
    q.push("1");
    res.push_back("1");
    while (true)
    {
        string top = q.front();
        q.pop();
        if (top.size() == 19)
            break;
        res.push_back((top + "0"));
        res.push_back((top + "1"));
        q.push(top + "0");
        q.push(top + "1");
    }
}
void bd1()
{
    vector<int> v;
    while (n)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    int idx = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= 2)
        {
            idx = i;
            break;
        }
    }
    for (int i = idx; i < v.size(); i++)
    {
        v[i] = 1;
    }
    long long ans = 0;
    long long s = 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans += v[i] * s;
        s *= 2;
    }
    cout << ans << endl;
}
int main()
{
    sing();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long cnt = 0;
        for (auto it : res)
        {
            if (stoll(it) >= n && stoll(it) % n == 0)
            {
                cnt = stoll(it);
                  break;
            }
        }
        cout << cnt << endl;
    }
}