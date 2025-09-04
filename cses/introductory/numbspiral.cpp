#include <bits/stdc++.h>
using namespace std; 

#define int long long

void solve(){
    int x, y; 
    cin >> x >> y;
    
    int pot = max(x, y), sub = min(x,y); 
    
    if((pot*pot) % 2 != 0){ 
        if(x > y) cout << ((pot-1)* (pot-1)) + (sub) << endl; 
        else cout << (pot*pot) - (sub-1) << endl; 
    }else{
        if(x > y) cout << ((pot)* (pot)) - (sub-1) << endl; 
        else cout << ((pot-1)*(pot-1)) + (sub) << endl; 
    }


}

signed main(){
    int t; 

    cin >> t; 

    while(t--) solve(); 


}