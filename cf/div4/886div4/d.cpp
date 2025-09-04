#include <bits/stdc++.h>
using namespace std; 

#define endl '\n'
#define ll long long 

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main(){
    int t, n, k, a; 

    cin >> t; 

    while(t--){
        int cont = 1, ans = 1; 
        vector<int> valores; 

        cin >> n >> k; 

        for(int i = 0; i < n; i++){
            cin >> a; 
            valores.push_back(a); 
        }

        sort(valores.begin(), valores.end());
 
        for(int i  = 1; i < n; i ++){
            if(abs(valores[i] - valores[i-1]) > k) cont = 1;
            else cont++;
            ans = max(ans,cont); 
        }
        
        cout << n - ans << endl; 
    }

    return 0; 
}