#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

long double noOfCards(ll n)
{
        return floor(sqrt(2*n / 3));
        
}



int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << noOfCards(n) << endl;
    }
    return 0;
}

