#include <bits/stdc++.h>
using namespace std; 

void solve(){ 
    int n, x, max=0; cin >> n; 

    int m[n][n], v[n*2]; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){ 
            cin >> x; 
            if(x > max) max = x; 

            v[i+j+1] = x;  
        }
    }
    
    int sum1=0, sum2=0; 
    for(int i = 0; i <= 2*n; i++) sum1 += i; 
    for(int i =1; i< 2*n; i++) sum2 += v[i]; 
        
    sum1 -= sum2; 
    v[0] = sum1; 

    for(auto a : v) cout << a << " "; 
    cout << endl; 
}



int main(){ 
    int t; 
    cin >> t; 

    while(t--) solve(); 


    return 0; 
}