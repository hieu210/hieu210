#include<bits/stdc++.h>
using namespace std;
    vector<string > v;
    int n;
void sinh(){
    queue<string > q;
         q.push("1");
         v.push_back("1"); 
        while(v.size()<=10000){
            string top =q.front();
            q.pop();
            v.push_back(top+"0");
            v.push_back(top+"1");
            q.push(top+"0");
            q.push(top+"1");
        }
}
int main (){
    sinh();
    int t;
     cin >> t;
     while(t--){
        int n;
         cin >> n;
for(int i=0; i<n; i++){
    cout << v[i] << " ";
}
cout << endl;
     }
}