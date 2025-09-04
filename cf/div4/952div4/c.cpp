#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'
#define maxn 1e9 + 10


void solve(){
    ll n, cont = 0, sum, m;
    cin >> n; 

    vector<ll>a(n); 

    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
 
    sum = 0; 
    m = 0; 

    for(int i = 0; i < n; i++){
        sum += a[i]; 
        m = max(m, a[i]); 

        if(sum - m == m){
            cont++;
        }  
    }

    cout << cont << endl; 

}


int main(){
    int t; cin >> t; 

    while(t--) solve(); 

    return 0; 
}