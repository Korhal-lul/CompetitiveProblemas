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
    int n; cin >> n;
    vi vec(n);
    vi aux(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        //if(vec[i] >= i)aux.push_back(i);
    }
    int c = n;
    for(int i = n-1; i >= 0; i--){
        if(i+1 >= vec[i])c+= vec[i];
        else{
            c+= i;
        }
    }
    cout << c << endl;
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

