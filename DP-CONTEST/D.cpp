#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;
int W;
int n;
vi v(MAX);
vi pesos(MAX);
ll dp[MAX];

void knapsack(){
    for(int i = 0; i < n; i++){
        int p = pesos[i];
        for(int w = W; w - p >= 0; w--)
            dp[w] = max(dp[w], dp[w-p]+v[i]);
    }
}

void solve(){
    cin >> n >> W;
    for(int i = 0;i < n; i++)
        cin >> pesos[i] >> v[i];
    knapsack();
    cout << dp[W] << endl;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    solve(); 
    return 0;
}

