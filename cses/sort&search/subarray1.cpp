#include <bits/stdc++.h>
using namespace std; 

#define int long long 

const int maxn = 1e9 + 5; 

signed main() { 
    int n, x, ans=0; cin >> n >> x; 

    vector<int> vetor(n); 

    for(int i = 0; i < n; i++) cin >> vetor[i]; 

    int sum = 0, l = 0; 
    
    // left e right começam o mesmo 
    for(int r = 0; r < n; r++){ 
        // começa a somar 
        sum += vetor[r]; 

        // entra no while para mover vetor da esquerda apenas se soma for maior que alvo
        while(sum > x){; 
            sum -= vetor[l]; 
            l++; 
        }
        
        if(sum == x) ans ++;
    }
    

     cout << ans << endl; 
}