#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll INF = 1e12;
const int MAX = 1e6+5;
ll res = 0;
map<string, int> mapa;

map<char, ll> trie[MAX];
ll value[MAX];

struct triee{
    int n_nodes = 0;
    void insert(string &s, int v){
        ll id = 0;
        ll sum = v;
        for (char c: s){
            if(!trie[id].count(c)) trie[id][c] = ++n_nodes;
            id = trie[id][c];
            if(value[id] != 0) sum+= value[id];
        }
        res = max(res, sum);
        value[id] = v;

    }
    int get_value(string &s){
        int id = 0;
        for (char c: s){
            if(!trie[id].count(c)) return -1;
            id = trie[id][c];

        }
        return value[id];

    }

};

void dfs(){

}

void solve(){
    int n; cin >> n;
    triee t;
    for(int i = 0; i < n; i++){
        string s; int x;
        cin >> s >> x;
        mapa[s] = x;
        t.insert(s, x);
    }
    string s = "neferti";
    cout << res << endl;
}


int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}

