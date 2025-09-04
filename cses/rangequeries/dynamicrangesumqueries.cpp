#include <bits/stdc++.h>
using namespace std; 

#define maxn 2 * 1e5 + 5 
#define int long long 

int n, q; 
vector<int> v(maxn); 
vector<int> seg(4*maxn);  

int build(int no, int l, int r){
    if(l == r) return seg[no] = v[l]; 

    seg[no] = build(2*no, l, (l+r)/2) + build(2*no + 1 , (l+r)/2 + 1, r); 
    
    return seg[no]; 
}

int update(int no, int l, int r, int k, int u){ 
    if(l == r) return seg[no] = u; 

    if(k <= (l+r)/2) seg[no] = seg[2*no+1] + update(2*no, l, (l+r)/2, k, u); 
    else seg[no] = seg[2*no] + update(2*no + 1, (l+r)/2 + 1, r, k, u); 

    return seg[no]; 
}

// 3 casos 
int query(int no, int l, int r, int L, int R){
    if(l >= L and r <= R) return seg[no]; 
    else if(l > R or r < L) return 0; 
    return query(2*no, l, (l+r)/2, L, R) + query(2*no + 1, (l+r)/2 + 1, r, L, R); 
}

signed main(){ 
    cin >> n >> q; 

    for(int i = 1; i <= n; i++){ 
        cin >> v[i];
    }

    build(1, 1, n); 

    int k, a, b; 
    while(q--){ 
        cin >> k >> a >> b;  
        if(k == 1) update(1, 1, n, a, b); 
        else if(k == 2){
          cout << query(1, 1, n, a, b) << endl; 
        }
    }

}