#include <bits/stdc++.h>
using namespace std; 

#define int long long 

int const maxn = 1e5 + 5; 
int n,m,k; 
vector<int> adj[maxn]; 
vector<int> planetas(maxn); 
queue<pair<int,int>> fila;  

void bfs(int s){ 
    int cont = 0; 
    vector<int> trocas (n+1); 
    vector<vector<int>> distancia(n + 1, vector<int>(k + 1, -1));
    vector<int> antes(n+1, -1);   
    
    distancia[s][0] = 0;  
    trocas[s] = 0;
    fila.emplace(s, 0); 

    while(!fila.empty()) {
        auto [u,t] = fila.front(); 
        fila.pop(); 

        for(auto v : adj[u]){
            if(planetas[u] != planetas[v]) trocas[v] = trocas[u] + 1; 

            if(distancia[v][  ] == -1 && trocas[v] <= k){
                distancia[v] = distancia[u] + 1;
                antes[v] = u; 
                fila.emplace(v); 
            }
        }
    }

    if(antes[n] == -1) cout << -1 << endl; 
    else{
        int node = n; 
        while(node != 1){
            cont++; 
            node = antes[node]; 
        }

        cout << cont << endl;
    } 
}

signed main( ){ 
    cin >> n >> m >> k; 

    for(int i = 1; i < n+1; i++) { 
        cin >> planetas[i]; 
    }
    
    int a, b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b; 
        adj[a].push_back(b); 
        adj[b].push_back(a);
    }

    bfs(1); 

}