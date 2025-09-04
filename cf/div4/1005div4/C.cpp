#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int a, b, c, d, aux, check =0; 

    cin >> a >> b >> c >> d; 

    if(a > b){
        aux = a;
        a = b; 
        b = aux;
    }

    if(c > d){
        aux = d; 
        d = c; 
        c = aux; 
    }
    if(a <= c && c <= b){
        for(int i = a; i < b; i++){
            if(d == i){
                check = 1; 
                break; 
            }
        }
    }else{
        if(a <= d && d <= b){
            for(int i=a; i < b; i++){
                if(c==i){
                    check = 1;
                    break; 
                }
        }
      }else{
        if(a > c || c > b) check =1; 
    }
    }

    if(check==1) cout << "NO" << endl; 
    else cout << "YES" << endl; 

}



int main(){
    int t; 
    cin >> t; 

    while(t--) solve(); 

    return 0; 
}