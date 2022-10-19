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
	string s = "a";
	string t = "a";
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int ok = 0;
		int a, b;cin >> a >> b;
		string x; cin >> x;

		if(a == 1)s+=x;
		else t+=x;
		if(!ok && t.length() > s.length())ok=1;
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
