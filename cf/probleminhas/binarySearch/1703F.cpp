#include <bits/stdc++.h>
using namespace std; 

#define int long long

void solve(){ 
    int n, a; 
    vector<int> v; 
    cin >> n; 

    for(int i = 0; i < n; i++){
        cin >> a; 
        v.push_back(a); 
    }

    int l = 0, r = n-1, mid, total = 0;

    if(l < v[l] < r < v[r]) total++; 
    while(l <= r){ 
        mid = (l + r)/2; 

        if(l < v[l] < r < v[r]) total++;

        if(l <= v[mid]) l = mid + 1; 
        if(r >= v[mid]) r = mid - 1; 
    }

    cout << total << endl; 
}


signed main(){ 
    int t; cin >> t; 
    while(t--) solve(); 
}