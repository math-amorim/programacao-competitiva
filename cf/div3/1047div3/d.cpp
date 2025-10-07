#include <bits/stdc++.h>
using namespace std; 

#define int long long


void solve(){ 
    int n; cin >> n; vector<int> v (n), freq(n+1); 

    vector<pair<int,int>> s(n); 
    
    for(int i = 0; i < n; i++){ 
        cin >> v[i]; 
        s[i] = {v[i], i}; 
        freq[v[i]]++; 
    } 
   
    for(auto a : v){   
        if(a > n or freq[a] % a != 0){ 
           cout << -1 << endl;   
           return; 
        } 
    }
   
    sort(s.begin(),s.end()); 
    
    vector<int> answer(n,n);
    int ant = s[n-1].first, qt, cont = n, num = 1;

    for(int i = n-1; i >= 0; i--){  
        answer[s[i].second] = cont; 
        if(num == s[i].first){ 
           num = 0; 
           cont--; 
        }
       num++;   
    }

    for(auto a : answer) cout << a << " "; 
    cout << endl;
}

signed main(){ 
    int t; cin >> t; 
    while(t--) solve(); 
} 
