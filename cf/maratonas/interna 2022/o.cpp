#include <bits/stdc++.h>
using namespace std; 

int verify(int freq[]){
    if((freq[0] >= 1 && freq[1] >= 1 && freq[2] >= 1) || (freq[1] >=1 && freq[2] >=1 && freq[3] >= 1) || (freq[0] >= 1 && freq[2] >= 1 && freq[3] >= 1) || (freq[0]>= 1 && freq[1]>= 1 && freq[3] >= 1))return 1;

    return 0;  
}

int main(){
    int n, freq[34][4]={0}, pos=-1; 
    // char - 48 para converter.
    string x; 
    vector<string> m; 

    cin >> n; 

    for(int i=0; i < n; i++){
        cin >> x; 
        m.push_back(x); 

        if(i >= 9){
            if(m[0][1] == 'O') freq[m[0][0] - 48][0]--; else
            if(m[0][1] == 'C') freq[m[0][0] - 48][1]--; else 
            if(m[0][1] == 'P') freq[m[0][0] - 48][2]--; else
            if(m[0][1] == 'E') freq[m[0][0] - 48][3]--; 
            m.erase(m.begin()); 
        }

        if(x[1] == 'O') freq[x[0] - 48][0] ++; else              
        if(x[1] == 'C') freq[x[0] - 48][1] ++; else
        if(x[1] == 'P') freq[x[0] - 48][2] ++; else
        if(x[1] == 'E') freq[x[0] - 48][3] ++; 

        if(verify(freq[x[0] - 48]) == 1 && pos == -1){
            pos = i + 1;
        }  


    }

    cout << pos << endl; 

    return 0; 
}