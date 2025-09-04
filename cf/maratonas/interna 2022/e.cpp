#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    double ms, ne; int mf; 
    cin >> t; 
    while(t--){
        mf = 500; 
        cin >> ms; 
        ms *= 60; 
        mf -= ms; 
        ne = mf/4; 

        printf("%0.1lf\n", (ne/10));

    }


    return 0; 
}