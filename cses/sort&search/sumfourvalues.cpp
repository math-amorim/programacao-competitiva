#include <bits/stdc++.h> 
using namespace std; 

#define int long long 

vector<int> binary_search(int x, vector<pair<int, pair<int,int>>>& sum, int i, int j){ 
	int l = 0, r = sum.size(), mid;  
	  
	while(l < r) { 
	   mid = (l + r) / 2;   
	   if(sum[mid].first == x and (i != sum[mid].second.first and i!= sum[mid].second.second) and (j!=sum[mid].second.first and j!= sum[mid].second.second)) return {i, j, sum[mid].second.first, sum[mid].second.second};  
			
	  
	   else if(sum[mid].first < x) l = mid + 1; 
		
	   else r = mid - 1; 
	   
	} 

	return {0}; 
}  


signed main(){ 
	int n, target; cin >> n >> target; 	
	
	vector<pair<int,int>> ord(n);

	for(int i = 0; i < n; i++) {	
	    int a; cin >> a;
	    ord[i] = {a, i+1}; 
	}	
	

	vector<pair<int, pair<int,int>>> sum;	

	for(int i = 0; i < n; i++) {
	   for(int j = i + 1; j < n; j++){
	      sum.push_back({(ord[i].first + ord[j].first), {i+1,j+1}});   
	   }
	}
	 
	sort(begin(sum), begin(sum)); 
 	  	
	int l, dif; 
	vector<int> ans; 
  
	for(int l = div; l < n; l++){ 
	   for(int r = l + 1; r < n; r++){   
	   	dif = target - (ord[r].first + ord[l].first);   
		ans = binary_search(dif,sum, l+1, r+1);		
		if(ans.size() == 4) {  
		    for(auto a : ans) cout << a << " " ; cout << endl;
		    return 0; 
		} 
		l++; 
	   } 
	} 
	
	cout << "IMPOSSIBLE" << endl; 
} 


