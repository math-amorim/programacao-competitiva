#include <bits/stdc++.h>
using namespace std; 

#define int long long 

int fatorial(int x){ 
    if(x == 0) return 1; 
    if(x == 1) return 1; 
    
    return fatorial(x - 1) * x; 
} 

signed main(){ 

    int x; cin >> x; 

    int ans = fatorial(x); 

    cout << ans << endl; 

    return 0; 
}