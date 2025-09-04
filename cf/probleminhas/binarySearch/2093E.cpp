#include <bits/stdc++.h> 
using namespace std; 

#define int long long 
#define endl '\n'

void solve(){ 
    int n, k; cin >> n >> k; 

    vector<int> a(n); 
    for(int i = 0; i < n; i++) cin >> a[i]; 

    int l = 0, r = n, mex, ans = 0; 

    while(l <=  r){ 
        mex = (r + l) / 2; 
        vector<int> freq (mex + 1); 
        int cont = 0, cont2 = 0; 

        for(int i = 0; i < n; i++){ 
            if(a[i] < mex && freq[a[i]] == 0){ 
                freq[a[i]] = 1;
                cont++;
            } 
            
            if(cont == mex){
                cont = 0; 
                cont2++; 
                for(int i = 0; i < mex; i++) freq[i] = 0; 
            }
        }

        if(cont2 >= k) { 
            ans = mex;
            l = mex +1;
        }else{ 
            r = mex - 1;
        }
    }

    cout << ans << endl; 
} 


signed main(){ 
    int t; cin >> t; 

    while(t--) solve(); 

}

