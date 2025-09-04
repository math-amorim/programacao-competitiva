#include <bits/stdc++.h>
using namespace std; 
using ll = long long;


ll binarysearch(vector<ll> a, ll k, ll c){
    ll r=k, l=0; ll mid; 
         while(l <= r){
            mid = l+r>>1;
            if(a[mid] > c)
         {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
     return mid; 
}

void solve(){
    int n, k, q; 

    cin >> n >> k >> q; 

    vector<ll> placas(k + 1), minutos(k+1);   
    
    placas[0] = 0; 
    for(int i = 1; i <= k; i++){
        int var; cin >> var; 
        placas[i] = var; 
    }placas[k] = n; 
   
    minutos[0] = 0;
    for(int i = 1; i <= k; i++){
        int var; cin >> var;
        minutos[i] = var; 
    } 

    ll query, pos;
    ll res; 
    while(q--){
        cin >> query;

        if(query == 0){
            res =0;
        }else{
            pos = binarysearch(placas, k, query);  
            
            
            ll div =  (minutos[pos] - minutos[pos+1]) / (placas[pos] - placas[pos+1]); 
        
            res =  ( (query - placas[pos+1]) * div) + minutos[pos+1]; 
        } 
        cout << res << " "; 

    } 
    cout << endl; 
}

int main(){

    int t; 
    cin >> t; 

    while(t--) solve(); 


    return 0;
}