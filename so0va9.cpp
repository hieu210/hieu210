#include <bits/stdc++.h>
using namespace std;
vector<long long> res;
long long ans[1000];
void sinh()
{
    queue<string> q;
    q.push("9");
    res.push_back(9);
    while (1)
    {
        string top = q.front();
        q.pop();
        if (top.length() == 10)
            break;
        res.push_back(stoll(top + "0"));
        res.push_back(stoll(top + "9"));
        q.push(top + "0");
        q.push(top + "9");
    }
    // for(int i=1 ; i <= 100 ; i++ ){
    //     for(auto x : res ){
    //         if(x%i==0){
    //        ans[i]=x;
    //        break;
    //         }
    //     }
    // }
}
int main()
{
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(auto x : res ){
            if( x % n == 0 ){
                cout << x ;
                break;
            }
        }
        cout << endl;
    //    cout << ans[n] << endl;
    }
}