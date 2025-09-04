#include <bits/stdc++.h>
using namespace std;

#define int long long 

int bs(int x, vector<pair<int, int>> &pares){
    int cont = 0, l = 0, r = pares.size() - 1, mid;
    while(l <= r){ 
        mid = (l+r)/2;
        if(pares[mid].first <= x) l = mid + 1; 
    
        if(pares[mid].first > x){ 
            cont = pares.size() - mid;    
            r = mid - 1;
        }
    }
     return cont; 
} 

void solve(){ 
    int n; cin >> n; 
    vector<int> a (n);
    vector<pair<int,int>> pares;     
    
    
    for(int i = 0; i < n; i++){ 
        cin >> a[i];
        if(a[i] < (i + 1)){
            pair<int,int> x; x = {a[i], i + 1 };  
            pares.push_back(x);
        }
    }
    
    int cont = 0;  
    
    sort(pares.begin(), pares.end()); 

    for(int i = 0; i < pares.size(); i++){
        cont += bs(pares[i].second, pares); 
    } 
          
    cout << cont << endl; 

} 

signed main()
{
    int t; cin >> t; 
    
    while(t--) solve(); 
}