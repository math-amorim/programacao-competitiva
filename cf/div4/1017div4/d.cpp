#include <bits/stdc++.h>
using namespace std; 

void solve(){ 
    string p, test; 

    cin >> p >> test;
    
    int l1=0, r1=0, l2=0, r2=0; 
    
    for(int i = 0; i < test.size();  i++) {
        if(test[i] == 'L'){ 
            l1++; r1 = 0, r2 = 0;
            if(test[i+1] == 'R'){ 
                for(int j = 0; p[j] != 'R'; j++) l2++;  
                cout << " R " << r2 << " " << r1 << endl; 

              if(l1 != l2 || l1 != 2*l2) {
                cout << "NO" << endl; 
                return; 
              }
            }
            if(test[i] == 'R'){
            r1++; l1 = 0, l2 = 0;  
            if(test[i+1] =='L'){ 
                cout << r1 << " " << r2 << " R " << endl; 

                for(int j = 0; p[j] != 'L'; j++) r2++; 
                cout << " R " << r2 << " " << r1 << endl; 
                if(r2 != r2 || r1 != 2*r2){ 
                    cout << "NO" << endl; 
                    return;  
                }
            }
            }
        } 
    }
    cout << "YES" << endl; 

}



int main(){ 
    int t; 
    cin >> t; 

    while(t--) solve(); 


    return 0; 
}