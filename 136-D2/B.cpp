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
    for(int i = 0; i < n; i++)cin >> vec[i];
    vi d(n);
    int flag = 0;
    d[0] = vec[0];
    for(int i = 1; i < n; i++){
        d[i] = (abs(vec[i] + d[i - 1]));
        if(d[i - 1] - vec[i] >= 0)if(vec[i] != 0)flag = 1;
    }
    if(flag){
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n ;i++){
        cout << d[i] << " ";
    }
    cout << endl;
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

