#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;
map<string, vector<float>> mapa;
vector<string> vec;

void solve(){
    string s;
    getline(cin, s);
    getline(cin, s);
    cout << "A " << s << endl;
    vec.push_back(s);
    float x;
    vector<float> vf;
    while(cin >> x){
        vf.push_back(x);
    }
    //cout << x << endl;
    mapa[s] = vf;
}

void res(){
    for(int i = 0; i < vec.size();i++){
        double sum = 0;
        for(auto f : mapa[vec[i]])sum += f;
        sum/= mapa[vec[i]].size();
        printf("%s: %.1f \n",  vec[i].c_str(), sum);
    }
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int t;cin >> t;
    
    while(t--){
        solve();
    }
    res();
    return 0;
}

