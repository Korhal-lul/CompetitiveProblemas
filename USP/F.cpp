#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

ll ru(ll n){
    return ((n % 2) == 0)? (n/2) : ((n+1)/2);
}

ll rd(ll n){
    return ((n%2) == 0)? (n/2) : n/2+1;
}


int s(ll f, ll n, int dir, ll fac){
    //cout << n << " " << f << " " << dir << " " << fac<< endl;
    if(n == 1)return f;
    if((n % 2) == 0 && (dir%2) == 1)f += fac;
    return s(f, rd(n), dir+1, fac*2);
}

void solve(){
    ll n;
    cin >> n;
    //vl vec(n);
    int a = s(1, ru(n), 1, 2);
    cout << a << endl;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    solve();     
    return 0;
}

