#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    int vec[n];

    for(int i = 0; i < n; i++)cin >> vec[i];
    
    int dp[n];

    dp[0] = 0;

    for(int i = 1; i < n; i++){
        dp[i] = min(dp[i - 1] + abs(vec[i - 1] - vec[i]), dp[i - 2] + abs(vec[i - 2] - vec[i]));
    }
    cout << dp[n-1] << endl;

    return 0;
}

