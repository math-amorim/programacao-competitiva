#include <bits/stdc++.h>
using namespace std; 

#define ll long long 

const ll  INF = 1e9; 

void solve(){
    ll books; cin >> books; 

    ll vetor[3]; vetor[0] = INF, vetor[1] = INF, vetor[2] = INF;

    ll input1; string input2; 
    for(int i = 0; i < books; i++){
        cin >> input1 >> input2; 
        if(input2 == "10") vetor[0] = min(input1, vetor[0]); 
        if(input2 == "01") vetor[1] = min(input1, vetor[1]); 
        if(input2 == "11") vetor[2] = min(input1, vetor[2]); 
    }

    if(min(vetor[0] + vetor[1], vetor[2]) == INF){
        cout << "-1" << endl; 
    }else{
      cout << min(vetor[1] + vetor[0], vetor[2]) << endl; 
    } 

}


int main(){
    int t; cin >> t; 

    while(t--) solve(); 
}