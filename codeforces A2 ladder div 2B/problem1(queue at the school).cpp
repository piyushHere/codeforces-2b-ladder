#include<bits/stdc++.h>
using namespace std;

void rearrange(string &s, int t){
	for(int i = 0; i < t; i++){
		int j = 0;
		while(j < s.length()-1){
			if(s[j]=='B' && s[j+1]=='G'){
				s[j]='G';
				s[j+1]='B';
				j = j+2;
			}
			else j++;
		}
	}
	return;
}

int main(){
	int n,t;
	cin >> n >> t;
	string s;
	cin >> s;
	rearrange(s,t);
	cout << s;
	return 0;
	
}