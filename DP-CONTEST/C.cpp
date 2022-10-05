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

int solve(int dp[MAX][2], int vec[MAX][3]){
    int a;

}


int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    int vec[n][3];

    for(int i = 0; i < n; i++) for(int j = 0; j < 3; j++)cin >> vec[i][j];

    int dp[n][2];
    
    cout << solve(dp, vec) << endl;

    return 0;
}

