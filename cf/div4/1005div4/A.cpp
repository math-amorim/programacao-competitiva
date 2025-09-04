#include <bits/stdc++.h>
using namespace std; 

int main(){
    int x, y, n; 
    cin >> n; 
    while(n--){
        cin >> x >> y; 

        if(x > y){
            cout << y << " " << x << endl; 
        }else{
            cout << x << " " <<  y << endl; 
        }
    }
    return 0; 
}