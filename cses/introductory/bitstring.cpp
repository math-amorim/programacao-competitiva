#include <bits/stdc++.h>
using namespace std; 

#define int long long 

const int m = 1e9 + 7; 

signed main(){
    int n; 
    cin >> n; 

    int ans = 1; 

    for(int i = 0; i < n; i++){
        ans *= 2; 
        ans %= m; 
    }

    cout <<  ans  << endl; 
}