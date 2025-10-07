#include <bits/stdc++.h> 
using namespace std; 

#define int long long 

int ans; 


void binary_search(int a, int b){ 
    int l = 1, r = b, mid; 
    while(l <= r) { 
        mid = (l+r)/2;
        if(b % mid == 0){ 
          int x = (a * mid) + (b/mid); 
          if(x % 2 == 0) ans = max(ans, x); 
          r = mid - 1;
        }else{ 
           l = mid + 1;
        } 

    }
  
} 

void solve(){
    int a, b; cin >> a >> b; 
    ans = -1; 
    binary_search(a,b);  

    cout << ans << endl; 
} 


signed main() {
    int k; cin >> k;
    while(k--) solve(); 
} 
