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
    vector<ll> o;
    vector<ll> t;
    int vec[n];

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec[i] = x;
    }
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(vec[i] == 0){
            o.push_back(x);
        }else t.push_back(x);
    }
    sort(o.begin(), o.end());
    sort(t.begin(), t.end());
    //cout << o.back() << endl;
    ll sum = 0;
    int a = o.size(), b = t.size();
    int now = -1;
    if(((a < b) || ((a == b) && o[0] >= t[0])) && t.size() > 0){
        sum+= t[0];
        t.erase(t.begin());
        now = 0;
    }else if((b < a || ((a == b) && o[0] < t[0])) && o.size() > 0){
        sum+= o[0];
        o.erase(o.begin());
        now = 1;
    }
    for(int i = 0 ; i < n - 1; i++){
        if(now == 0 && o.size() > 0){
            sum+= 2 * o.back();
            o.pop_back();
            now = 1;
        }else if(now == 1 && t.size() > 0){
            sum+= 2 * t.back();
            t.pop_back();
            now = 0;
        }else if(o.size() > 0){
            sum+= o.back();
            o.pop_back();
            now = 1;
 
        }else if(t.size() > 0){
            sum+= t.back();
            t.pop_back();
            now = 0;
        }
    }
    cout << sum << endl;
    
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

