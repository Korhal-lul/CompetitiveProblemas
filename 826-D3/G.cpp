#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

vi adj[MAX];

vi bfs(int x){
    vi vis(MAX);
    vi dist(MAX);

    queue<ii> q;
    q.push({x, 0});
    vis[x] = 1;

    while(!q.empty()){
        auto [u, d] = q.front();
        q.pop();
        dist[u] = d;
        for(auto v : adj[u]){
            if(vis[v] == 0){
                q.push({v, d+1});
                vis[v]++;

            }

        }


    }
    return dist;

}

void solve(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    int f; cin >> f;
    vi ff(f);
    for(int i = 0; i < f; i++){
        cin >> ff[i];
        ff[i]--;

    }
    int s; cin >> s;
    vi sc(s);
    for(int i = 0; i < s; i++){
        cin >> sc[i];
        sc[i]--;

    }

    vi sem_carro;
    for(int x : sc) sem_carro.emplace_back(ff[x]);
    sort(all(sem_carro));

    vi com_carro;
    for(int x : ff)
        if(!binary_search(all(sem_carro), x))
            com_carro.emplace_back(x);

    map<int, vi> dist;
    dist[0] = bfs(0);

    int sum = sem_carro.size();
    for(int x : sem_carro){
        bool found = false;
        dist[x] = bfs(x);
        for(auto y : com_carro){
            int du = dist[0][y];
            int dv = dist[0][x];
            int dlu = dist[x][y];

            if(du == dv + dlu){
                found = true;
                cout << x+1 << " " << y+1 << endl;
                break;

            }

        }
        if(found) sum--;
        
    }
    exit(0);

}

void reset(){
    for(int i = 0; i < MAX; i++){
        adj[i].clear();

    }

}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
        reset();

    }
    return 0;

}
