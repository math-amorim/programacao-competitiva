#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

void solve(){
    string a, b; 

    cin >> a >> b; 
    
    char aux; 
    aux = a[0];
    a[0] = b[0];
    b[0] = aux; 

    cout << a << " " << b << endl; 
}


int main(){
    int t; 
    cin >> t; 

    while(t--){
        solve(); 
    }  


    return 0; 
}