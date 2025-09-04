#include <bits/stdc++.h>
using namespace std; 

#define int long long 

void solve(){
    string p, s; cin >> p >> s; 
    int i = 0, j = 0, s1 = 0, s2=0;  

    
    while(i < p.size()){ 
        s1++; 
        if(p[i] != p[i+1]){ 
            while(p[i] == s[j] and j < s.size()){ 
                j++; 
                s2++; 
            } 
            if(s1 <= s2 and s2 <= 2* (s1)){ 
                s1 = 0; s2 = 0; 
            }else {
                cout << "NO" << endl; return; 
            } 
        }i++;  
    } 

    if(i == p.size() and j == s.size()) cout << "YES" << endl; 
    else cout << "NO" << endl;

}   


signed main(){ 
    int n; cin >> n; 
    
    while(n--) solve(); 

}


