#include <bits/stdc++.h>
using namespace std; 

#define int long long

const int mod = 1e9 + 7; 

signed main(){ 
    int n; cin >> n; 
    int ans = 1; 
    for(int i = 0; i < n; i++){
        ans = ans << 1;  
        ans %= mod;
    }

    cout << ans % mod << endl;
}
