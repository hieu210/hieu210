#include<bits/stdc++.h>
using namespace std;
vector<string>res;
void sinh(){
    vector<string > tmp;
    queue<string>q;
    q.push("6");
    q.push("8");
    res.push_back("6");
    res.push_back("8");
     while(true){
        string top = q.front();
        q.pop();
        if(top.size()==15) break;
        res.push_back(top+"6");
        res.push_back(top+"8");
         q.push(top+"6");
         q.push(top+"8");
     }

}
int main (){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
     cin >> t;
     sinh();
     while(t--){
        int n;
         cin >> n;
         int dem =0;
         vector<string> temp;
         for(auto x : res ){
            if(x.size()==n+1) break;
           temp.push_back(x);
           dem++;
         }
reverse(temp.begin(), temp.end());
cout <<dem << endl;
for(auto x : temp){
    cout << x<<" ";
}
cout << endl;
     }
}