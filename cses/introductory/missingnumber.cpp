#include <bits/stdc++.h>
using namespace std; 

#define int long long 

signed main(){
    int n; cin >> n; 

    vector<int> numeros; 

    int resultado = (n * (n+1))/2;  

    int input, sum=0;  
    for(int i = 0; i < (n-1); i++){
        cin >> input; 
        numeros.push_back(input); 
        sum += input; 
    }

    cout << resultado - sum << endl; 

}