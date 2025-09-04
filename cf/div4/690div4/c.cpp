#include <bits/stdc++.h>
using namespace std; 

#define ll long long 
#define endl '\n'

void solve(){
    int n, k; cin >> n >> k; 

    int s = n - 1, aux = n; 

    cout << (k / n-1) << endl ; 
    


    aux -= n; 
    int aux2 = (n-1) * ((aux)/n); 
    
    cout << aux + (abs(k-(aux2)))  << endl; 


}

int main(){
    int t; cin >> t; 

    while(t--) solve(); 

    return 0; 
}