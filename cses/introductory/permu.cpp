#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; cin >> n; 

    vector<int> perm, dif; 

    for(int i = 1; i<=n; i++) perm.push_back(i); 

    if(n != 1 && n < 4){
        cout << "NO SOLUTION" << endl; 
    }else{  
        for(int i = 1; i < n;i++){
            if(abs(perm[i] - perm[i+1]) == 1 || abs(perm[i] - perm[i-1]) == 1) {
                random_shuffle(perm.begin(), perm.end()); 
                i = 0; 
              }
            }
            for(auto a : perm) cout << a << " "; 
    }


}