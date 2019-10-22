#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[1000][1000];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	int x1 = (arr[0][1] * arr[0][2])/arr[1][2];
	x1 = sqrt(x1);
	cout << x1;
	cout << "hello";
}