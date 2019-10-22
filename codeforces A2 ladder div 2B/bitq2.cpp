#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> v;
	for(int i = 0; i <= m; i++){
		int xi;
		cin >> xi;
		v.push_back(xi);
	}
	int c = v[m];
	int count=0;
	for(int i = 0; i < m; i++){
		int re = c^v[i];
		int ans = __builtin_popcount (re);
		if(ans <= k) count++;
	}
	cout << count;

}
