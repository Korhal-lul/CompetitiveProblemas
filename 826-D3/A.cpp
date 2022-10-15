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
    string s;
    cin >> s;
    string s2;
    cin >> s2;
    int x = 0;
    char ss;
    for(char c : s){
        if(c == 'X')x++;
        else ss = c;
    }
    char sss;
    int y = 0;
    for(char c : s2){
        if(c == 'X')y++;
        else sss = c;
    }
    //cout << ss << " " << sss << endl;
    if(ss == sss){
        if(y == x){
            cout << '=' << endl;
        }else if(x > y && ss == 'S'){
            cout << '<' << endl;
        }else if(ss == 'S'){
            cout << '>' << endl;
        }else if(x > y && ss == 'L'){
            cout << '>' << endl;
        }else if(ss == 'L'){
            cout << '<' << endl;
        }
        //cout << x << " " << y << endl;
        return;
    }
    int val = 0, val1 = 0;
    if(ss == 'S')val = 1;
    else if(ss == 'M') val = 2;
    else if(ss == 'L') val = 3;
    if(sss == 'S')val1 = 1;
    else if(sss == 'M') val1 = 2;
    else if(sss == 'L') val1 = 3;

    if(val > val1)cout << '>' << endl;
    else cout << '<' << endl;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        //cout << t << endl;
        solve();
    }
    return 0;
}

