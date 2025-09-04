#include <bits/stdc++.h>
using namespace std; 

void solve(){ 
    int n, m, l, r;

    cin >> n >> m >> l >> r; 

    int a = 0, b = 0; 
    for(int j = m; j!=0; j--){ 
       if(a != l) a--; 
         else 
        if(b != r) b++; 

    }   
    
    cout << a << " " << b << endl; 
}



int main(){ 
    int t; 
    cin >> t; 

    while(t--) solve(); 


    return 0; 
}