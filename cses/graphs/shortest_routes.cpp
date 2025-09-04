#include <bits/stdc++.h>
using namespace std; 

#define int long long 
#define ii pair<int, int>
const int maxn = 1e5 + 5; 
const int INF = 1e18; 

int n; 
vector<ii> adj[maxn]; 

vector<int> dist(maxn, INF); 

void dijkstra(int s){ 
    priority_queue<ii, vector<ii>, greater<>> fila;
    dist[s] = 0;
    fila.emplace(0,s);

    while(!fila.empty()){
        auto [c, u] = fila.top(); 
        fila.pop(); 
        if(dist[u] != c) continue; 
        for(auto [v, w] : adj[u]){ 
            if(dist[v] > c + w){ 
                dist[v] = c + w; 
                fila.emplace(dist[v], v);
            } 
        }
    }
}


signed main() { 
    int m, a, b, c; 

    cin >> n >> m; 

    for(int i = 0; i < m; i++){ 
        cin >> a >> b >> c; 
        ii input = {b,c};
        adj[a].emplace_back(input); 
    }    
  
    dijkstra(1); 

    for(int i = 1; i <= n; i++) cout << dist[i] << " ";
    cout << endl;
}