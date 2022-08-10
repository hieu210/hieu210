#include<bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
     cin >> t;
     cin.ignore();
     deque<int> dq;
     while(t--){
        string s;
        cin >> s;
        if(s=="PUSHFRONT"){
            int n;
             cin >> n;
             dq.push_front(n);
        }
        else if(s=="PUSHBACK"){
            int n; cin >> n; 
            dq.push_back(n);
        }
        else if(s=="PRINTFRONT"){
            if(!dq.empty()){
                cout << dq.front()<<endl;
            }
            else cout << "NONE\n";
        }
        else if(s=="PRINTBACK"){
              if(!dq.empty()){
                cout << dq.back()<<endl;
            }
            else cout << "NONE\n";
        }
        else if(s=="POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
        }
        else {
            if(!dq.empty()){
                dq.pop_back();
            }
        }
     }
}