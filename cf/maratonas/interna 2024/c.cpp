#include <bits/stdc++.h>
using namespace std; 

int main(){
    int m[26][26]={0}, n; 
    string cancao; 

    cin >> cancao >> n; 

    char a, b; 
    while(n--){
        cin >> a >> b; 
        int m1 = a - 97, m2 = b - 97; 
        m[m1][m2]++; 
    }

    int ok = 1;

    for(int i = 1; i < cancao.size(); i++){
        if(m[cancao[i-1] - 97][cancao[i] - 97]  != 1){
            ok = 0; 
            break; 
        }
    }


    if(ok == 0 ) cout << "NAO" << endl; 
    else cout << "SIM" << endl; 

    return 0; 
}