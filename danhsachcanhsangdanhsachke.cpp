#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
     cin >> t;
     while(t--){
        int v,e;
        cin >> v>> e;
        vector<int> dinh[v+5];
        vector<int> canh[e+5];
        for(int i=0;i<e;i++){
            int x,y;
            cin >> x>> y;
            dinh[x].push_back(y);
            dinh[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            cout << i <<": ";
            for(int j=0;j<dinh[i].size();j++){
            cout << dinh[i][j]<<" "; 
            }
            cout << endl;
        }
        cout << endl;
     }
}