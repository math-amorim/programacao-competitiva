#include <bits/stdc++.h>
using namespace std; 

#define endl '\n'
#define ll long long 

int main(){
    int t, n, a, b; 

    cin >> t; 

    while(t--){
        int out = 1, q = 0;
        cin >> n; 

        for(int i = 0; i < n; i ++){
            cin >> a >> b;
            if(a <= 10 && b > q){
              out = (i+1); 
              q = b; 
            }

        }

        cout << out << endl; 
    }


    return 0;
}