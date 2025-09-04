#include <bits/stdc++.h>
using namespace std; 

#define int long long 

signed main(){ 
    int n; cin >> n; 
    vector<int> v (n); 

    for(int i = 0; i < n; i++){ 
        cin >> v[i]; 
    }

    sort(v.begin(), v.end()); 

    int x = 0, cont = 0; 
    
    for(int i = 0; i < n; i++){ 
        if(v[i] != x){
            cont++; 
            x = v[i]; 
        }
    }

    cout << cont << endl; 
}