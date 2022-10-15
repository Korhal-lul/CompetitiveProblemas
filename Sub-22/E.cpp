#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;
map<int,int> q;

int main(){
    int n;
    cin >> n;
    vi vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];

    }

    int c = 0;
    for(int i = 0; i < n; i++){
        if(q[vec[i]] != 0){
            q[vec[i]]--;
            q[vec[i] - 1]++;

        }else{
            // cout << "AAAAAAAAA" << endl;
            q[vec[i] - 1]++;
            c++;

        }

    }
    cout << c << endl;

}
