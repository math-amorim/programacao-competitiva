#include <bits/stdc++.h>
using namespace std; 

#define int long long 

signed main(){
    string input; 
    cin >> input; 

    int result=0, cont=1; 

    for(int i = 0; i < input.size(); i++){
        if(input[i] == input[i+1]){ 
            cont++;
        }else{
            result = max(result, cont); 
            cont = 1; 
        } 
    }

    cout << result << endl; 
}