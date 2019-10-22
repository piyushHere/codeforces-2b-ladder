#include<bits/stdc++.h>
using namespace std;

int rearrange(string&s, int l){
	int count = 0;
	for(int i = 0; i < l; i++){
		if(s[i]=='n') count++;
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	string in;
	cin >> in;
	int ones =rearrange(in,n);
	int zeros = (n - (3*ones))/4;
	for(int i = 0; i < ones; i++){
		cout << 1 << " ";
	}
	for(int i = 0; i < zeros; i++){
		cout << 0 << " ";
	}
}