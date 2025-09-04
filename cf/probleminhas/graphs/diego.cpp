#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
#define ii pair<int, int> 
const int maxn = 1e5 + 5;

vector<ii> matriz[maxn]; 
int res = 0; 

void solve(int u, int x, int v){
    int aux; 
    for(auto a : matriz[u]){
        if(a.first == v) continue; 
        aux = a.second + x; 
        res = max(aux, res); 
        solve(a.first, aux, u); 
    }
}

int main(){
    int n, u, v, x; 
    cin >> n; 

    for(int i=0; i< n -1 ; i++){
        cin >> u >> v >> x; 
        matriz[u].emplace_back(v,x); 
        matriz[v].emplace_back(u,x); 
    }

    solve(1, 0, 0); 

    cout << res << endl; 

    return 0; 
}