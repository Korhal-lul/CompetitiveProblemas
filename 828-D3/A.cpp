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
    vi vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    string s; cin >> s;
    map<int, char> mapa;

    for(int i = 0; i < n; i++){
        if(mapa[vec[i]] == 0) mapa[vec[i]] = s[i];
        else if(mapa[vec[i]] != s[i]){
            //cout << mapa[vec[i]] << " " << vec[i] << endl;
            cout << "NO" << endl; return;
        }
    }
    cout << "YES" << endl;
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
