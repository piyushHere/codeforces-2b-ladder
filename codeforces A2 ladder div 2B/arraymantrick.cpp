#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1e9+7;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 1e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

bool check(v32 v1, v32 v2, int n){
	forn(i,n){
		if(v1[i]!=v2[i]) return false;
	}
	return true;
}

int main(){
	fast_cin();
	int n,a,b;
	bool ans=false;
	bool test=true;
	cin >>n;
	v32 v1,v2;
	forn(i,n){
		int k;
		cin >> k;
		v1.pb(k);
		v2.pb(k);
	}
	sort(all(v2));
	forn(i,n){
		if(v1[i]!=v2[i]){
			test = false;
			a = i;
			break;
		}
	}
	if(!test){
		rforn(i,n-1){
			if(v1[i]!=v2[i]){
				b=i;
				break;
			}
		}
		reverse(v1.begin()+a,v1.begin()+b+1);
	}
	ans = check(v1,v2,n);
	if(test) cout << "yes" << ln << "1 1";
	else if(ans) cout << "yes" << ln << a+1 << " " << b+1;
	else cout << "no";
	return 0;

}