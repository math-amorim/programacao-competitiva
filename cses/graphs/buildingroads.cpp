#include <bits/stdc++.h>
using namespace std; 

#define int long long 
#define ii pair<int,int> 


const int maxn = 1e5 +5; 

int n, m, cont = 0; 
vector<int> adj [maxn]; 
vector<int> vis(maxn); 
vector<ii> estradas; 

void dfs(int u){
    vis[u] = 1; 
    
    for(auto v : adj[u]){ 
       if(vis[v] == 0){ 
            dfs(v); 
       }  
    }

}

signed main( ){ 
    int a, b; 
    cin >> n >> m; 

    for(int i = 0; i < m; i++){ 
        cin >> a >> b; 
        adj[a].push_back(b); 
        adj[b].push_back(a); 
    }    

    vector<int> r; 

    for(int i = 1; i <= n; i++){
        if(vis[i] != 1){
           dfs(i);  
           r.push_back(i);       
        }
    }

    for(int i = 0; i < r.size() - 1; i++){
        estradas.emplace_back(r[i], r[i+1]); 
        cont++; 
    }

    cout << cont << endl;

    for(auto a : estradas){
        cout << a.first << " " << a.second << endl;
    }

}

