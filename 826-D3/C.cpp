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
    vi v(n);
    for(int i = 0; i < n;i++){
        cin >> v[i];
    }
    map<ll, int> mapa;
    map<ll, int> t;
    ll occ = 0;
    ll ind = 0;
    ll r = 0;
    for(int i = 0; i < n; i++){
        ll sum = 0;
        for(int j = i; j < n; j++){
            sum += v[j];
            mapa[sum]++;
            //cout << sum << " " << mapa[sum] <<endl;
            if(occ < mapa[sum]){
                occ = mapa[sum];
                ind = sum;
                t[sum] = max(t[sum],j-i+1);
            }
        }
        if(n-1 == i && occ == 1){
            occ = mapa[sum];
            ind = sum;
            t[sum] = n;
        }
    }
    cout << t[ind] << " " << ind << endl;
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

