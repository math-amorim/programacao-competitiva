#include <bits/stdc++.h>
using namespace std; 

#define int long long 

int n, m;
const int maxn = 1e5 + 5; 

vector<int> adj[maxn]; 
queue<int> fila; 
 

void bfs(int s){
    vector<int> distancia(n + 1, -1); 
    vector<int> anterior(n+1); 

    distancia[s] = 0; 
    fila.emplace(s); 
    while(!fila.empty()){ 
        int u = fila.front(); 
        fila.pop(); 
        
        for(auto v : adj[u]){
            if(distancia[v] == -1){
                distancia[v] = distancia[u] + 1;
                anterior[v] = u; 
                fila.emplace(v);
            
            }
        }
    }

    if(anterior[n] == 0) cout << "IMPOSSIBLE"<<endl;
    else{
        int node = n, cont = 0;  
        vector<int> ans;

        while(node != 0){
            ans.push_back(node);  
            cont++; 
            node = anterior[node];
        }

        reverse(ans.begin(), ans.end()); 
        cout << cont << endl; 
        for(auto a : ans) cout << a << " ";  
    }
}

signed main(){ 
    cin >> n >> m; 
    int a, b; 

    for(int i = 0; i < m; i++){
        cin >> a >> b;  
        adj[a].push_back(b);         
        adj[b].push_back(a); 
    }

    bfs(1); 
}