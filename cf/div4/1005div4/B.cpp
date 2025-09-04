#include <bits/stdc++.h>
using namespace std; 

void solve(){
    string s; 
    cin >> s;
    int ok = 0; char ini = s[0]; 
    for(int i=0; s[i] != '\0'; i++){
        if(s[i] != s[0]) ok = 1; 
    }

    if(s.size() == 1 || ok == 0){
        cout << "NO" << endl; 
    }else{
        cout << "YES" << endl; 
        string aux = s; 
        while(aux == s){
            int a = rand() % s.size(); 
            int b = rand() % s.size(); 
            ini = aux[a]; 
            aux[a] = aux[b]; 
            aux[b] = ini; 
        }

        cout << aux << endl; 
    }

}


int main(){
    int n; 
    cin >> n; 

    while(n--) solve(); 

    return 0;
}