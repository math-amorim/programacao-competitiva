#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

void solve(){
    int n; cin >> n; 
    int sum = 0, ans = 0, b = 2;  

    for(int i = 2; i <= n; i++){
        sum = 0; 
        for(int j = 2; j <= n; j++){
            if(j % i == 0){
                sum += j;  
            }
        } 
        if(sum > ans) b = i; 

        ans = max(ans, sum);

    }

    cout << b << endl; 

}

int main(){
    int t; cin >> t; 

    while(t--) solve(); 

    return 0; 
}