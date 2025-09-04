#include <bits/stdc++.h>
using namespace std; 

#define ll long long 

int main(){ 
    ll n, x; 
    vector<ll> estrelas; 

    cin >> n >> x; 

    for(int i = 0; i < n; i++){
        ll entrada; cin >> entrada;     
        estrelas.push_back(entrada); 
    }

    vector<ll> respostas; 

    if(x == 0){ 
        cout << estrelas.size() << endl;
        for(int i = 0; i < n; i ++){
            cout << i+1 << " "; 
        } 
    }else{
        for(int i = 0; i < n; i++){
            if(x % estrelas[i] == 0) respostas.push_back(i+1); 
        }

        cout << respostas.size() << endl; 
        for(int i = 0; i < respostas.size(); i++){
            cout << respostas[i] << " "; 
        }

    }

    return 0; 
}