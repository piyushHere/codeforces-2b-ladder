#include<iostream>
using namespace std;

int main(){
	int n,m;
	long long time=0;
	int current = 1;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int mi;
		cin >> mi;
		if(mi >= current) time = time+mi-current;
		else{
			time = time + n-current+mi;
		}
		current=mi;
	}
	cout << time;
}