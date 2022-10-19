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
    int q; cin >> q;
    vi vec(n);
    ll even = 0;
    int s= 0;
    ll odd = 0;
    int ss = 0;
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if((vec[i]%2)== 0){even+=vec[i];s++;}
        else {odd +=vec[i];ss++;}
    }
    ll total = 0;
    int is = 0;
    for(int i = 0; i < q; i++){
        int a, x;
        cin >> a >> x;
        if((x%2) == 1 && a == 1 && is == 0){
            is= 2;
            odd += ss * x;
            total = even + odd;
        }else if(a == 0 && (x%2) == 1 && is == 0){
            is = 1;
            even += s * x;
            total = even + odd;
        }else if(is == 0){
            if(a == 1)odd += ss*x;
            else even += s*x;
            total = even+odd;
        }else{
            if((a  == 0 && is == 2) || (is == 1 && a == 1)){
                total +=(s+ss)*x;
                if((x % 2) == 1)is++;
                if(is >= 3)is = 1;
            }
        }
        cout << total << endl;
        //cout << total << " " << is << " "<<even << " "<< odd << endl;
    }
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
