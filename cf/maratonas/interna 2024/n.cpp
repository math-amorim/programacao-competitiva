#include <bits/stdc++.h>
using namespace std; 

#define ll long long 
#define endl '\n' 

int main(){
    ll n, m; 
    cin >> n >> m; 
    
    vector<ll> mat [m]; 

    ll q; cin >> q; 

    while(q--){
        int x, y, tipo; cin >> tipo; 
    
        if(tipo == 1){
            cin >> x >> y; 
            mat[x][y] = 1; 
        }else{

        

        }

    }

    return 0; 
}