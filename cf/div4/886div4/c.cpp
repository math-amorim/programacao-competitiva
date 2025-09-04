#include <bits/stdc++.h>
using namespace std; 

#define endl '\n'
#define ll long long 


int main(){
    int t; 
    cin >> t;
    while(t--){
        string ans = ""; 

        char matriz[8][8], in; 

        for(int i =0; i < 8;i++) 
            for(int j = 0; j < 8; j++) {
                cin >> in;
                if(in != '.') ans += in;   
            }

        
        cout << ans << endl; 
    }    



    return 0; 
}