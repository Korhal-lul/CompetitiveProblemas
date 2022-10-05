#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;
int n;

void solve(){
    cin >> n;
    vector<ll> vec(n);
    
    for(int i = 0; i < n; i++)cin >> vec[i];

    sort(vec.begin(), vec.end());
    ll diff = INF;
    if(n == 3){
        diff = abs(vec[1] - vec[0]) + abs(vec[1] - vec[2]);
    }
    for(int i = 0; i < n - 2; i++){ 
        //cout << abs(vec[i + 1] - vec[i]) + abs(vec[i + 1] - vec[i + 2]) << " " << vec[i] << " " << vec[i+1] << " " << vec[i + 2] << endl;
        diff = min(diff, abs(vec[i + 1] - vec[i]) + abs(vec[i + 1] - vec[i + 2]));
    }
    cout << diff << endl;

    return;
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

