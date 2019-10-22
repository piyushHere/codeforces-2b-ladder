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
	fast_cin;
	ll r,x1,y1,x2,y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;
	ll first = x2-x1;
	ll second = y2-y1;
	ll sum = first*first + second*second;
	double distance = sqrt(sum);
	
	//cout << distance << ln;
	double m = fmod(distance, 2.0 * r);
	//cout << m << ln;
	if(m==0) cout << distance/(2*r);
	else{
	int count = 0;
	while(distance > 2*r){
		distance = distance - 2*r;
		count++;
	}
	cout << count+1;
}
	return 0;


	

}