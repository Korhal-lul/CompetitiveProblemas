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
    vi aux(n);
    int a = 0, b = 0;
    for(int i = 0; i < n ; i++){
        cin >> vec[i];
        if(vec[i] == 1)a++;
    }
    int ok = 1;
    int match = 0;
    for(int i = 0; i < n; i++){
        cin >> aux[i];
        if(aux[i] != vec[i]) {ok = 0;match++;}
        if(aux[i] == 1)b++;
    }
    int diff = abs(a - b);
    if(ok) {cout << "0" << endl;return;}
    if(a == b){cout << 1 << endl;}
    else if(match == diff)cout << diff << endl;
    else cout << abs(a - b)+1 << endl;

}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

