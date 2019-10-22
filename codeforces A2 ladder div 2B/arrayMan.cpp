#include <bits/stdc++.h>  
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

void pr(v32 v){
	for(auto it:v) cout << it << " ";
}

int main(){
	fast_cin();
	int n;
	cin >> n;
	v32 v;
	bool ans = false;
	int l,r;
	forn(i,n){
		int k;
		cin >> k;
		v.pb(k);
	}

	forn(i,n){
		forsn(j,i,n){
			reverse(v.begin()+i,v.begin()+j+1);
			if(is_sorted(v.begin(),v.end())) {ans=true;l=i+1;r=j+1; break; }
			else reverse(v.begin()+i,v.begin()+j+1);
	}
	if(ans) break;
}
	if(ans) cout << "yes" << ln << l << " " << r;
	else cout << "no";
	return 0;


}
