#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;
float res[5];
float maxRes = 0;

void solve(){
    string s;
    cin >> s;
    map<char, int> mapa;
    for(int i = 0; i < s.size();i++){
        mapa[s[i]]++;
    }
    vector<string> vec(5);
    int error[5] = {0,0,0,0,0};
    int flag = 0;
    int least = MAX;
    for(int i = 0; i < 5; i++){
        int err = 0;
        cin >> vec[i];
        map<char, int> aux;
        for(int k = 0; k < vec[i].size(); k++){
            aux[vec[i][k]]++;
        }
        int sZ = s.size();
        int vZ = vec[i].size();
        //if(i == 3) cout << "A " <<err << endl;
        for(int k = 0; k < vZ; k++){
            err += abs(mapa[s[k]] - aux[s[k]]);
        }
        if(err == 0) flag = 1;
        error[i] += err;
        //if(i == 3)cout << "B " << error[i] << endl;
        least = min(least, err);
    }

    for(int i = 0; i < 5; i++){
        if(flag == 1 && error[i] != 0)continue;
        if(flag == 1)res[i] += 1;
        if(error[i] == least)res[i] += 0.5;
    }
}


int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    for(int i = 0; i < 5; i++){
        maxRes = max(res[i], maxRes);
    }
    cout << maxRes << endl;
    for(int i = 0; i < 5; i++){
        if(res[i] == maxRes) cout << i + 1 << " ";
    }
    cout << endl;
    for(auto i : res) cout << i << endl;
    return 0;
}

