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

v32 rem(v32 v){
	while(v.size()>=3){
		if((v[0]>=v[1] && v[0]<=v[2]) ||(v[0]>=v[2] && v[0]<=v[1])) v.erase(v.begin());
		else if((v[1]>=v[0] && v[1]<=v[2]) ||(v[1]>=v[2] && v[1]<=v[0])) v.erase(v.begin()+1);
		else v.erase(v.begin()+2);
	}
	return v;
}

int main(){
	fast_cin();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		v32 arr(n);
		forn(i,n) cin >> arr[i];
		/*forn(i,n) cout << arr[i] << " "; cout << ln;*/
		v32 v =rem(arr);
		for(auto it: v) cout << it << " ";
		cout << ln;
	}

/*	v32 a;
	forn(i,10) a.pb(i);
	for(auto it: a) cout << it << " ";
	cout <<
	a.erase(a.begin());
	cout << a[0];*/
}