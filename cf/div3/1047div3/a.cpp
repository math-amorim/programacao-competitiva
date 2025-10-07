#include <bits/stdc++.h> 
using namespace std; 

void solve(){ 
    int k, x; cin >> k >> x; 
 
    while(k--){ 
        if(x % 2 == 0 or ((x-1) / 3) <= 0) { 
            x *= 2; 
        }else{ 
            x -= 1;
            x /=3; 
        }
    } 

    cout << x << endl; 
} 

int main(){ 
    int t; cin >> t; 

    while(t--) solve(); 
} 
