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
	int n, q;
	cin >> n >> q;
	vl vec(n);
	
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		if(i == 0)vec[i] = x;
		else vec[i] = vec[i-1] + x;
	}

	for(int i =0 ; i < q; i++){
		ll x;cin >> x;
		cout << binary_search(x, vec) << endl;
	}
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
