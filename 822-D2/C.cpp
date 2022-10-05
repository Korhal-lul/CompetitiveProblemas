#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;
int n;

int rd(int f){
    return ((f % 2) == 0) ? f / 2 : (f + 1) / 2;
}

void solve(){
    cin >> n;
    string s;
    cin >> s;
    vi vec;
    ll sum = 0;
    int m = 0;
    for(int i = 1; i <= n; i++){
        if(s[i - 1] == '0'){
            //cout << i << endl;
            vec.push_back(i);
            m++;
        }
    }
    //for(int i = 0; i < m; i++)cout << vec[i] << endl;
    for(int i = 0; i < m; i++){
        for(int k = 0; k <= i;k++){
            if((vec[i] % vec[k]) == 0){sum+= vec[k];
                break;
            }
        }
    }
    cout << sum << endl;

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

