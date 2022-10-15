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
    if(n == 3 || n == 1){
        cout << "-1" << endl;
        return;
    }
    if(n == 2) {cout << 2 << " " << 1 << endl;return;}
    for(int i = n; i > 0; i-=2){
        if((n%2) == 1 && i == 3)break;
        cout << i-1 << " " << i << " ";
    }
    if((n%2) == 1)cout << 1 <<" " <<  2 << " "<< 3;
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

