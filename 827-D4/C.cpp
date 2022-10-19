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
	char c[8][8];
	vector<int> v;
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++){
			cin >> c[i][j];
			if(c[i][j] == 'R')v.push_back(i);
		}
	int ok = 0;
	for(auto i : v){
		int ok = 1;
		for(int j = 0; j < 8; j++)
			if(c[i][j] != 'R'){ok = 0;break;}
		if(ok == 1){
			cout << 'R' << endl;return;
		}
	}
	cout << 'B' << endl;
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
