#include <bits/stdc++.h>
using namespace std; 


void solve(){ 
    string input, concat; 

    getline(cin, input); 

    concat+= input[0]; 
    for(int i = 0; i < input.size(); i++){ 
        if(input[i] == 32) concat+= input[i+1]; 
    }

    cout << concat << endl; 
}



int main(){ 
    int t; 

    cin >> t; 
    cin.ignore(); 

    while(t--){ solve();}  
 

    return 0; 
}