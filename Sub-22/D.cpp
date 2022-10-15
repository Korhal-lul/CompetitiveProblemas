#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    cout << log2( 2^n/(x&-x)  ) -1 << endl;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

