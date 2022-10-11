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
    
    vi a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << "YES" << endl;
        return;
    }

    vi b(n);
    int ok = 1;
    for(int i = 0; i < n+1; i++){
        if(i == 0)b[i] = 3*a[i];
        else{
            cout << b[i-1] << " " << n << endl;
            if((b[i-1] % a[i-1]) != 0){
                ok = 0;
                break;
            }
            b[i] = a[i-1] * b[i-1];
            cout << b[i] << endl;
            if(a[i-1] != gcd(b[i-1], b[i])){
                ok = 0;
                break;
            }
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
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

