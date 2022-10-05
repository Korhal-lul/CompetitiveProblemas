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
    
    int n, k; cin >> n >> k;
    int vec[n];

    for(int i = 0; i < n; i++)cin >> vec[i];
    
    int dp[n];

    dp[0] = 0;

    for(int i = 1; i < n; i++){
        dp[i] = INT_MAX;
        for(int j = 1; j <= k; j++){
            if(i - j < 0)break;
            dp[i] = min(dp[i - j] + abs(vec[i - j] - vec[i]), dp[i]);
        }
    }
    cout << dp[n-1] << endl;

    return 0;
}

