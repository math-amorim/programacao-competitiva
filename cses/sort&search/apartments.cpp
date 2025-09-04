#include <bits/stdc++.h>
using namespace std; 

#define int long long 

signed main(){ 
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; 
    cin >> n >> m >> k; 
    vector<int> clientes(n), apartamentos(m);

    for(int i = 0; i < n; i++) cin >> clientes[i]; 
    for(int i = 0; i < m; i++) cin >> apartamentos[i]; 

    sort(clientes.begin(), clientes.end()); 
    sort(apartamentos.begin(), apartamentos.end());


    int ans = 0, i = 0, j = 0;  

    while(i < n and j < m){ 
        if(clientes[i] - k <= apartamentos[j] && apartamentos[j] <= clientes[i] + k){
            ans++; 
            i++; 
            j++; 
        }

        if(apartamentos[j] + k < clientes[i]) j++; 

        if(clientes[i] + k  < apartamentos[j]) i++; 

    } 

    cout << ans << endl; 

}