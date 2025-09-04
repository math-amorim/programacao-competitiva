#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'



int main(){
    ll n, s=0, g=1, acum; 
    
    cin >> n; 
    
    vector<ll> est (n); 

    for(int i = 0; i < n; i++){
        cin >> est[i]; 
        s += est[i]; 
    }

    cout << s << " "; 
    acum = est[0]; 
    
    for(int i = 1; i < n; i++){
        if((acum | est[i]) < (acum + est[i])){
            g++; 
            acum = est[i];
        }else{
            acum = (acum | est[i]);
        }
    }

    cout << g << endl;
    return 0; 
}