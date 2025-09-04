#include <bits/stdc++.h>
using namespace std; 

const int tamn = 1500*1500; 

vector<int> alf(26);
int k, cont = 0,  ans = 0; 

struct trie {
    map<char, int> trie[tamn];  
    int n_nodes = 0; 
    
    void insert(string &s, int v) { 
		int id = 0;  
			for (char c : s) {	
				if (!trie[id].count(c)) trie[id][c] = ++n_nodes;    
				id = trie[id][c]; 
			} 
     }

    void dfs(int u, string pref, int cont){
	if(cont > k) return;    
        //cout << cont << " " << pref << endl;	
	for(auto [v, c] : trie[u]){
	     if(alf[v-'a'] == 0) dfs(c, pref+v, cont+1); 
	     else dfs(c, pref+v, cont); 
	} ans++;
    }


};

trie t; 

int main(){ 
	string s, al; 

	cin >> s >> al >> k; 
 
	for(int i = 0; i < 26; i++){ 
	   if(al[i] == '1') alf[i] = 1; 	   
	} 

	string ss;

	for(int i = 0; i < s.size(); i ++){	
       	ss = s.substr(i);  
	    t.insert(ss, 0) ;
	 } 

	t.dfs(0, "", 0); 

   	cout << ans - 1 << endl;
	return 0; 
}
