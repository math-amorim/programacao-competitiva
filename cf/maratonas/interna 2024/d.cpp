#include <bits/stdc++.h> 
using namespace std; 

#define int long long 
#define endl '\n'

signed main(){ 
    int n; cin >> n; 

    vector<int> valores(n); 

    for(int i = 0; i < n; i++){ 
        cin >> valores[i]; 
    } 

    int l = 1, r = 1e18, mid, aux, flag, ans = -1;  

    while(l <= r){ 
        mid = (l+r)/2;         
        aux = mid, flag = 0; 

        for(int i = 0; i < n; i++){ 
            aux--;
            if(aux <= valores[i]){  
                flag = -1;   
                break;
            }   
        }

        if(flag == -1){
           l = mid + 1; 
        }else{ 
            r = mid -1; 
            ans = mid; 
        }

    }

    cout << ans << endl; 
}
