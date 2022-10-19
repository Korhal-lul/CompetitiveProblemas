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
	int n; cin >> n;
	vi vec(n);
	vi v;
	int ind = -1;
	int big = 0;
	int freq = 1;
	for(int i = 0; i < n; i++){
		cin >> vec[i];
		if(vec[i] == 1){
			v.push_back(vec[i]);
			if(i == 0 && vec[i] == 1){
				big = freq;
				ind = i;
			}
			if(i !=0 && vec[i-1] == 1){
				freq++;
				if(freq > big){
					big = freq;
					ind = i;
				}
			}
			
		}else freq = 1;
	}
	if(ind == -1) {cout << "0" << endl;return;}
	cout << v.size()-big << endl;


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
