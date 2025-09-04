#include <bits/stdc++.h> 
using namespace std; 

#define int long long

vector<int> binary_search(int x, vector<tuple<int,int,int>>&v, int i, int j){
	int l =0, r = v.size()-1, m; 
	while(l <= r){
	    m = (l+r)/2;
	       
	    auto[a,b,c] = v[m]; 
            
	    //cout << a << " " << b << " " << c << " " << x << " " << i << " " << j << endl;  

    	    if(b == i or b == j) r = m -1 ; 
	    else  if(c == j or c == i) l = m + 1;	    

	    else if(a == x) return {i,j,b,c};

	    else if(a > x) r = m - 1;
	    else if(a < x) l = m + 1;
	}
	return {};
}


signed main(){ 
	int n, target; cin >> n >> target; 
	vector<int> v(n);
       	vector<pair<int,int>> p; 
	
	for(int i = 0; i < n; i++){
		cin >> v[i]; 
		p.push_back({v[i],i+1}); 
	}
	

	sort(begin(p), end(p));

	vector<tuple<int,int,int>> sum; 
	for(int i = 0; i < p.size(); i++)
	   for(int j = i + 1; j < p.size(); j++){
		sum.push_back({p[i].first+p[j].first, i, j});  
	   } 

	sort(begin(sum), end(sum));	
	for(int i = 0; i < sum.size(); i++){ 
	   auto [a,b,c] = sum[i]; 
	   int dif = target - a; 
	   vector<int> idxs = binary_search(dif,sum,b,c);
	   if(idxs.size() != 0){	
               cout << p[idxs[0]].second << " " << p[idxs[1]].second << " " << p[idxs[2]].second << " " << p[idxs[3]].second << endl;   

	       return 0;	
	   } 
			
	} 
	cout << "IMPOSSIBLE" << endl; 	
} 
