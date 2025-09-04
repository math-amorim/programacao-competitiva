#include <bits/stdc++.h>
using namespace std; 

#define int long long


signed main(){
    int n; cin >> n; 

    for(int i = 1; i <= n; i++){
        int k1 = (i*i), k2 = k1 - 1; 

        int divis = (k1*k2)/2; 

        cout << divis - (4*(i-1)*(i-2)) << endl; 
    }

}