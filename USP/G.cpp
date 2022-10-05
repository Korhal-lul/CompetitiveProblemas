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
    string s;
    cin >> s;
    vector<char> vec;
//    vec.push_back(s[0]);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != s[i + 1] && s[i] != s[i-1]){
            vec.push_back(s[i]);
            vec.push_back(s[i]);
        }else{
            vec.push_back(s[i]);
        }
    }
    for(auto i : vec) cout << i;
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
