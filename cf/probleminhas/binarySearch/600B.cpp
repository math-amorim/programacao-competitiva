#include <bits/stdc++.h>
using namespace std; 

#define int long long 

int n, m;
vector<int> a, b; 

void b_s(int b){ 
    int l = 0, r = n-1, mid, ans=-1;
    
    while(l <= r){ 
        mid = (l+r) / 2;
        if(a[mid] <= b){ 
            l = mid + 1;
            ans = mid; 
        }  
        if(a[mid] > b){ 
            r = mid - 1; 
        }
    }

    cout << ans + 1 << " "; 
} 

signed main() { 
    int input; cin >> n >> m;

    for(int i = 0; i < n; i++){ 
        cin >> input; 
        a.push_back(input); 
    }
    for(int i = 0; i < m; i++){
        cin >> input;
        b.push_back(input); 
    }

    sort(a.begin(), a.end()); 
    
    for(auto bj: b) b_s(bj); 

}
