#include <bits/stdc++.h>
using namespace std; 

#define int long long 

signed main(){ 
    int cont=0, x; 
    cin >> x; 
    
    while(x != 0) {  
        if((x & 1) == 1) cont++;        

        x = x >> 1;  
    } 
      
    cout << cont << endl; 
} 
