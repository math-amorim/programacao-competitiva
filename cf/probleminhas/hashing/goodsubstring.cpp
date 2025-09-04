#include <bits/stdc++.h>
using namespace std; 

#define int long long 
using ll = __int128; 

const ll primo = 4591;  
const ll m = (ll) 1e18 + 9; 

ll exp_mod(ll base, ll exp) {
    ll b = base, res = 1;
    while (exp) {
        if (exp & 1) res = (res * b) % m;
        b = (b * b) % m;
        exp /= 2;
    }
    return res;
}

ll inv(ll x) {
    return exp_mod(x, m - 2); 
}

signed main(){ 
    string s; cin >> s; 

    vector<int> v (26); 
    for(int i = 0; i < 26; i++){ 
        char a; cin >> a; 
        v[i] = a - '0';  
    }
    int k; cin >> k; 

    int n = s.size(); 
    vector<ll> hs (n + 1), pot (n+1), ipot(n+1); 
    pot[0] = 1;
    ipot[0] = 1; ipot[1] = inv(primo); 

    for(int i = 2; i <= n; i++){
        ipot[i] = (ipot[i-1] * ipot[1]) % m; 
    }

    for(int i = 1; i <= n; i++){
        pot[i] = (pot[i-1] * primo)% m;  
    }
    for(int i = 1; i <= n; i++){
        hs[i] = (hs[i -1] + (s[i - 1] * (pot[i])%m))%m; 
    }

    ll l, ans = 0, index, cont; 

    vector<ll> corretos; 
    for(int l = 0; l < s.size(); l++) {
        cont = 0; 
        for(int r = l; r < s.size(); r++){  
            if(v[s[r] - 'a'] == 0) cont ++;              
            
            index = (hs[r + 1] - hs[l] + m) * ipot[l] % m; 
            
            if(cont <= k) corretos.push_back(index); 
         

        } 

    }

    sort(corretos.begin(), corretos.end()); 
    corretos.erase(unique(begin(corretos), end(corretos)), end(corretos)); 
    cout << corretos.size() << endl; 

}