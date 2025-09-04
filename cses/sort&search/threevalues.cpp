#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define ii pair<int,int> 

signed main() { 
    int n, x; cin >> n >> x; 
    vector<ii> a (n);
    vector<int> ans;

    for(int i = 0; i < n; i++){ 
        int input; cin >> input;
        a[i] = {input, i + 1}; 
    }

    sort(a.begin(), a.end()); 

    int l, r, sum;
    for(int i = 0; i < a.size() - 1; i++){    
        l = i + 1; r = n -1; 
        while(l != r){ 
            sum = a[i].first + a[l].first + a[r].first; 
            if(sum == x){
                ans.push_back(a[i].second);
                ans.push_back(a[l].second); 
                ans.push_back(a[r].second);  
                break; 
            } 
            if(sum > x) r--;
            else l++; 
        }
        if(ans.size() == 3) break; 
    }

    if(ans.size() != 3) cout << "IMPOSSIBLE" << endl;
    else{ 
        sort(ans.begin(), ans.end()); 
        for(auto a : ans) cout << a << " ";
    } 

}