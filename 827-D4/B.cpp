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
	int n;
	cin >> n;
	map<int,int> vec;
	int ok = 1;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		vec[x]++;
		if(vec[x] >= 2)ok = 0;
	}
	if(!ok)cout << "NO" << endl;
	else cout <<"YES"<<endl;

}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    //cout << t << endl;
    while(t--){
        solve();
    }
    return 0;
}
