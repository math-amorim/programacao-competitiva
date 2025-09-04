#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define ii pair<int, int> 

int l, r; 

int solve(int x, vector<ii> valores){ 
    int soma;
    l  = 0, r = valores.size() - 1;

    while(l != r){
        soma = valores[l].first + valores[r].first; 
        if(soma == x){
            l = valores[l].second; 
            r = valores[r].second; 
            return x; 
        }

        if(soma > x) r--; 
        if(soma < x) l++;
    }

    return -1; 
}

signed main(){ 
    int n, x, input; cin >> n >> x; 
    vector<ii> valores(n);
    
    ii a;
    for(int i = 0; i < n; i++){ 
        cin >> input; valores[i] = {input, i + 1}; 
    }

    sort(valores.begin(), valores.end()); 

    int ans = solve(x, valores); 

    if(ans == -1) cout << "IMPOSSIBLE"; 
    else cout << min(l,r) << " " << max(l,r) << endl; 

}