#include <bits/stdc++.h>
using namespace std; 

void solve(){ 
    int n; cin >> n; 

    int vetor[n], input;

    for(int i = 0; i < n; i++){
        cin >> input; 
        vetor[i] = input; 
    } 

    int contador = 0, maior = 0; 

    for(int i = 0; i < n; i++){
        if(vetor[i] == 0) contador++; 

        if(vetor[i] == 1 && vetor[i+1] == 0){
            contador = 0; 
        }

        maior = max(maior, contador); 

    }

    cout << maior << endl; 

}

int main(){
    int t; cin >> t; 

    while(t--) solve();

}