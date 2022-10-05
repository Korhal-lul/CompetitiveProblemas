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
    ll vec[k];
    ll last = 0;
    int flag = 0;
    for(int i = 0; i < k; i++){
        cin >> vec[i];
    }
    if(k == 1) {cout << "YES" << endl;return;}
    for(int i = 0; i < k-2; i++){
        if(vec[i + 1] - vec[i] > vec[i+2] - vec[i + 1]){
            cout << "No" << endl;
            return;
        }
    }

    if((vec[1] - vec[0]) * (n - k + 1) >= vec[0])cout << "YES"  << endl;
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

