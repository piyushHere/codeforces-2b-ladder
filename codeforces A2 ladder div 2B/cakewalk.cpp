#include<bits/stdc++.h>
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
#define ff first
#define ss second
#define INF 1e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

bool solve(ll n){
	ll te = n;
	int count1 = 0;
	int count2 = 0;
	while(te%10==0){
		te = te/10;
		count1++;
	}
	while(te%2==0){
		te = te/2;
		count2++;
	}
	if(te == 1&& count1 >= count2) return true;
	else return false;
}


int main(){
	fast_cin();
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		bool x = solve(n);
		if(x) cout << "Yes";
		else cout << "No";
		cout << ln;
	}
	
}