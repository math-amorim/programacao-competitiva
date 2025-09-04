#include <bits/stdc++.h>
using namespace std; 

#define int long long 
const int maxn = 1e9+5; 

signed main(){ 
    int n, input, ans = maxn; 
    vector<int> nec, purch; 

    cin >> n; 


    for(int i = 0; i < n; i++){
        cin >> input; 
        nec.push_back(input); 
    } 
    for(int i = 0; i < n; i++){ 
        cin >> input; 
        purch.push_back(input); 
    }

    for(int i = 0; i < n; i++){ 
        ans = min(ans, (purch[i] / nec[i])); 
    }

    cout << ans << endl; 

}