#include <bits/stdc++.h>
using namespace std;

#define ll long long 

vector <ll> lake[1000]; 
vector<ll> vs[1000]; 

pair<int,int> mv[] = {{-1,0}, {0,1}, {1,0}, {0,-1}}; 

void pd(int x, int y){
    for(int i = 0; i < 4; i++){
        
    }

}

void dfs(){

}

void solve(){
    int n,m; cin >> n >> m; 

    ll a, max = 0; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          cin >> a; lake[i].push_back(a); 
        }
    }
    



}

int main(){
    int t; cin >> t; 

    while(t--) solve(); 

}