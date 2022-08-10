#include<bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
     cin >> t;
     cin.ignore();
     stack<int> st;
     while(t--){
        string s;
         cin >> s;
         if(s=="PUSH"){
            int n; 
            cin >> n;
             st.push(n);
         }
         else if(s=="PRINT"){
            if(!st.empty()){
                cout << st.top()<< endl;
            }
            else {
                cout <<"NONE\n";
            }
         }
         else {
            if(!st.empty()){
                st.pop();
            }
         }
     }
}