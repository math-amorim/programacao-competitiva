#include <bits/stdc++.h>
using namespace std; 

#define int long long 

signed main(){
    int n; cin >> n; 
    vector<int> v; 

    int input; 
    for(int i = 0; i < n; i++){
        cin >> input; 
        v.push_back(input);
    }

    int cont = 0;
    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]){
                cont += v[i-1] - v[i]; 

                v[i] += (v[i-1] - v[i]); 
        }
    }

    cout << cont << endl; 

}