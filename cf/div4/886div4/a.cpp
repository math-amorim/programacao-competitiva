#include <bits/stdc++.h>
using namespace std; 

#define endl '\n'
#define ll long long 


int main(){
    int n, a, b, c; 
    vector<int> s; 
    cin >> n; 

    while(n--){
        cin >> a >> b >> c; 
        
        if((a+b >= 10) || (a+c >= 10) || (b+c >= 10)) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    }



    return  0; 
}