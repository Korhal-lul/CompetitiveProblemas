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
    int a = int(s[0]), b = int(s[s.length()-1]);
    map<char, int> mapa;
    for(int i = 0; i < s.size(); i++){
        mapa[s[i]].push_back(i);
    }
    vi vec;
    sort(s.begin(), s.end());
    
    int cost = 0, count = 0;
    if(a < b)swap(a,b);
    //cout <<"A " << a << " " << b << endl; 
    int atual = 0;
    //vec.push_back(1);
    for(int i = 0; i< s.length();i++){
        char c = s[i];
        if(c <= a && c >= b){
            //cout << a << " " << b << " " << int(c) << endl;
            //cost+=abs(int(s[atual]) - int(c));
            //atual = i;
            //count++;
            vec.push_back(i);
        } 
    }
    cout << cost << " " << count << endl;
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;
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

