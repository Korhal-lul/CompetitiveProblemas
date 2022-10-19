#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

vector<vi> adj(1001);

void solve(){
	int n;cin >> n;
	vi vec[1001];
	for(int i = 0; i < n; i ++){
		int x; cin >> x;
		vec[x].push_back(i+1);
	}
	int m = -1;
	for(int i = 1;i < 1001; ++i){
		for(auto j : adj[i]){
			if(!vec[i].empty() && !vec[j].empty())m = max(m, vec[i].back() + vec[j].back());
		}
	}
	cout << m << endl;
}

int main(){
	for(int i = 1; i < 1001; ++i){
		for(int j = 1; j <= 1000; ++j) {

			if(__gcd(i, j) == 1) {

				adj[i].push_back(j);

			}

		}
	}
    	cout.sync_with_stdio(0);
    	cin.tie(0);
    	int t; cin >> t;
    	while(t--){
        	solve();
    	}
    return 0;
}
