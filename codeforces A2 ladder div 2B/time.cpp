#include<bits/stdc++.h>
#include<chrono>
using namespace std; 
using namespace std::chrono;

int main(){
	vector<int> v;
	for(int i=50; i>1; i--){
		v.push_back(i);
	}
	auto start = high_resolution_clock::now(); 
	sort(v.begin(),v.end());
	auto stop = high_resolution_clock::now(); 
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count();

}