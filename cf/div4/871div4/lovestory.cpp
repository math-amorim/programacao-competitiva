#include <bits/stdc++.h>
using namespace std; 

void solve(){ 
    string comp = "codeforces"; 
    string s; cin >> s; 

    int n = 0; 
    for(int i = 0; i  < 10; i++){
        if(s[i] != comp[i]) n++; 
    }

    cout << n << endl; 

}


int main(){
    int t; 
    cin >> t; 

    while(t--){
        solve(); 
    }

    return 0; 
}