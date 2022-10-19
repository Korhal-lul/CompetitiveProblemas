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
    int n;char c; cin >> n >> c;
    string s; cin >> s;
    int g;
    int g1 = 0;
    int cc = 0;
    queue<int> vec;
    int m = 0;
    int i= 0;
    for(int k = 1; k <= 2*n; k++){
        i++;
        if(i > n) i = 1;
        char a = s[i-1];
        //cout << a << " " << g1 << endl;
        if(a == c){vec.push(i);}
        if(a == 'g'){
            while(!vec.empty()){
                int x = vec.front();
                vec.pop();
                if(x > i){
                    //cout << x << " " << i << " " << m << endl;
                    m = max(m, n-x+i);
                }else{

                    //cout << x << " " << i << " " << m << endl;
                    m = max(m, i - x);
                }
            }
        }
    }
    cout << m << endl;
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
