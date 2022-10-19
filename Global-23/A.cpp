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
	int n, k;
	cin >> n >> k;
	vi vec(n);
	int ok = 0;
	for(int i = 0; i < n; i++){
		cin >> vec[i];
		if(vec[i] == 1)ok++;
	}	

	if(ok == 0){
		cout << "NO" << endl;
		return;
	}
	int sum = n;
	while(1){
		if(sum - k + 1 < 1)break;
		if(sum == 1)break;
		sum = sum - k +1;
	}
	if(sum == 1 || sum <= ok)cout << "YES" << endl;


	else cout << "NO" << endl;
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
