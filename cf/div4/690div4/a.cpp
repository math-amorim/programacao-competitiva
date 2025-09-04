#include <bits/stdc++.h>
using namespace std; 

#define ll long long 
#define endl '\n'

void solve(){
    int n, cont =  1; 
    cin >> n; 
    vector<int> ans; 
 
    while(n != 0){
        if(n %10 != 0){
            ans.push_back((n%10) * cont);    
        }
        n /= 10; 
        cont *= 10; 
    }
    cout << ans.size() << endl; 
    for(auto a : ans) cout << a << " "; 
    cout << endl; 
}


int main(){
    int t; 
    cin >> t; 

    while(t--) solve(); 

    return 0; 
}