#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

int bs(int s, vi &vec, int n){
    int esq = 0, dir = n-1, res = 0;
    while (esq <= dir){
        int mid = (esq + dir)/2;
        if (vec[mid] <= s) {
            esq = mid+1;
            res = mid+1;

        } else dir = mid-1;

    }
    return res;

}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];

    }
    sort(vec.begin(), vec.end());
    ll m; cin >> m;

    for(ll i = 0; i < m; i++){
        int x;
        cin >> x;
        cout << bs(x, vec, n) << endl;

    }

    return 0;

}
