#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int ok = 0;
	if(a + b == c)ok=1;
	if(c + b == a)ok=1;
	if(a + c == b)ok=1;

	if(ok)cout << "YES"<< endl;
	else cout <<"NO"<< endl;
}

int main(){
    	cout.sync_with_stdio(0);
    	cin.tie(0);
    	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
