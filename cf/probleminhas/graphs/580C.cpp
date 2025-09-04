#include <bits/stdc++.h>
using namespace std; 

#define int long long 

int m; 
const int maxn = 1e5 + 5;
vector<int> adj[maxn];  
vector<int> vis(maxn); 
vector<int> cats(maxn); 
int ans = 0; 

void dfs(int u, int conta_gato){ 
    vis[u] = 1; 

    if(cats[u] == 1) conta_gato++;  
    
    if(cats[u] == 0) conta_gato = 0;

    if(conta_gato <= m){
        if(adj[u].size() == 1 && u != 1){
            ans++; 
        }

        for(auto v : adj[u]){
            if(vis[v] == 0) dfs(v, conta_gato); 
        }
    }

}

signed main(){
    int n; cin >> n >> m; 

    for(int i = 1; i <= n; i++) cin >> cats[i]; 

    for(int i = 0; i < n-1; i++){ 
        int a, b; cin >> a >> b;    
        adj[a].push_back(b); 
        adj[b].push_back(a); 
    }

    dfs(1,0); 

    cout << ans << endl; 
}