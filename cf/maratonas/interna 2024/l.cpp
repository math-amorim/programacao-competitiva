#include <bits/stdc++.h>
using namespace std; 

#define ii pair<int,int>
const int maxn = 1e5 + 5; 

vector<ii> matriz[maxn]; 
vector<int> vis(maxn); 
vector<int> col(maxn); 
vector<int> s1;
vector<int> s2; 
int flag = 1; 

void dfs(int u, int c){
    vis[u] = 1; 
    col[u] = c; 
    if(c == 0) s1.push_back(u); 
    if(c == 1) s2.push_back(u); 

    for(auto v : matriz[u]){
        if(!vis[v.first]){
            dfs(v.first, c^1); 
        }else{
            if(col[v.first] == c){
                flag = 0; 
                return;  
            }            
        }
    }

} 

int main(){
    int n, m; 
    cin >> n >> m; 

    int u, v; 
    for(int i = 0; i < m; i++){
        cin >> u >> v; 
        matriz[u].emplace_back(v,1); 
        matriz[v].emplace_back(u, 1); 
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]) dfs(i, 0); 
    }

    if(flag == 0) cout << "IMPOSSIVEL" << endl;
    else{
        cout << "POSSIVEL" << endl; 
        cout << s1.size() << " " << s2.size() << endl; 
        for(auto a : s1) cout << a << " ";
        cout << endl; 
        for(auto b : s2) cout << b << " "; 
        cout << endl;
    }

    return 0;
}