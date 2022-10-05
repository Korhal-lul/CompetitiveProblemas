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
    int n, m;
    cin >> n >> m;
 //   else cout << "1 1" << endl;
    if((n > 3 && m > 3) || (n == 3 && m == 3) || ((n == 3 || m == 3) && (n == 2 || m == 2))){
        cout << "2 2" << endl;
        return;
    }
    cout << "1 1" << endl; 
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

