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

int main(){
	fast_cin();
	int n;
	int count = 0;
	map<int,int> order1;
	map<int,int> order2;
	cin >> n;
	int in[n];
	int out[n];
	forn(i,n) cin >> in[i];
	forn(i,n) cin >> out[i];	
	forn(i,n){
		order1[in[i]] = i+1;
		order2[out[i]]=i+1;
	}
	forsn(i,1,n+1){
		if(order2[i]<=order1[i]) count++;
	}
	forsn(i,1, n+1) cout << order1[i] << " " << order2[i] << ln;
	int ans = count;
	cout << ans;


}