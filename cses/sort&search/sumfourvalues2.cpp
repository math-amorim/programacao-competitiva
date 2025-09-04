#include <bits/stdc++.h> 
using namespace std; 

#define int long long 

vector<int> binary_search(int target, tuple<int,int,int> t, vector<tuple<int,int,int>> &v){ 
	int l = 0, r = v.size() - 1, mid, x;
   
	auto [a, b, c] = t; x = target - a;  

	while(l <= r){ 
	    mid = (l + r) / 2; 
	    auto[d,e,f] = v[mid]; 

	    if(e==b or e==c or f==b or f==c){
	 	 
	   } 

	    if(x == d) return {b,c,e,f}; 

	    else if(x > d) l = mid + 1; 
	    else if(x < d) r = mid - 1; 
	    	
	} 
	   
	 
	return {0}; 
}  


signed main(){ 
	int n, target; cin >> n >> target; 	
	
	vector<pair<int,int>> ord(n); 
	vector<tuple<int,int,int>> v;

	for(int i = 0; i < n; i++) {	
	    int a; cin >> a;
	    ord[i] = {a, i+1}; 
	}	
	

	for(int i = 0; i < n; i++) 
	   for(int j = i + 1; j < n; j++){
		tuple<int,int,int> a = {ord[i].first+ord[j].first, i+1, j+1};  
		 v.emplace_back(a);
	   }

	

	sort(begin(v), end(v)); 
	for(auto [a,b,c] : v) cout << a << " " << b << " " <<c << endl;	
	for(int i = 0; i < v.size(); i++){  
	    vector<int> ans = binary_search(target, v[i], v); 
	 
	    if(ans.size() != 4) continue; 

	    sort(begin(ans), end(ans)); 	
	    for(auto a : ans) cout << a << " "; 
	    cout << endl; 
	    return 0; 
	}
	
	cout << "IMPOSSIBLE" << endl; 
} 


