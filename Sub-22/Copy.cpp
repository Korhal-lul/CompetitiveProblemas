#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e5+5, INF = 1e12;

vii adj1[1005];//adj de X
vii adj2[1005];//adj de Y
ii dir[]={{0,1},{1,0},{0,-1},{-1,0}};
int vis[1005][1005];
int m = 0;
int tiles = 0;
int sa = MAX;//smallest a
int sb = MAX;//smallest b
int ba = 0;//biggest a
int bb = 0;//biggest b

bool valid(int dx, int dy, int xx, int yy){
    if(xx < sa || yy < sb || xx > ba || yy > bb)return false;
    if(dx != 0){
        //if(xx == 5 && yy == 5) cout << adj1[xx][0].first << " " << adj1[xx][0].second << endl;
        if(adj1[xx].size() == 0)return true;
        for(auto [a, b] : adj1[xx]){//se a coluna/linha q eu to passando ta entre um corte 
            if(yy >= a && yy <= b){
                cout << "dx "<<dx << " " << xx << " " << yy << " " << a << " " << b<< endl;
                return false;
            }
        }
    }else{
        if(adj2[yy].size() == 0)return true;
        for(auto [a, b] : adj2[yy]){//se a coluna/linha q eu to passando ta entre um corte 
            if(xx >= a && xx <= b){ 
                cout << "dy " << dy << " "<< xx << " " << yy << " " << a << " " << b<< endl;
                return false;
            }
        }
    }

    return true;
}
void dfs(int x, int y, int c){
    cout << x << " " << y << " " << c << endl;
    tiles++;
    for(auto [dx, dy] : dir){
        int xx = dx+x, yy = dy+y;
        if(vis[xx][yy] == 0 && valid(dx, dy, xx, yy)){
            vis[xx][yy] = c;
            dfs(xx, yy, c);
        }
    }
}

void solve(){
    int n;cin >> n;
    int la = 0;//last a
    int lb = 0;//last b
    for(int i = 0; i <= n; i++){
        int a, b; cin >> a >> b;
        int a1 = a, b1 = b;
        sa = min(sa, a);
        sb = min(sb, b);
        ba = max(ba, a);
        bb = max(bb, b);
        //cout << ba << endl;
        if(i != 0){
            //cout << la << " " << lb << " " << a << " " << b << endl;
            if(la == a){
                if(lb > b)swap(b, lb);
                //lb sempre menor
                adj1[a].emplace_back(lb, b-1);
                //cout << "X = "<< a << " "<< lb << " " << b-1 << endl;
            }else{
                if(la > a)swap(a, la);
                //la sempre menor
                adj2[b].emplace_back(la, a-1);
                //cout << "Y = " << b << " " << la << " " << a-1 << endl;
            }
        }

        la = a1;
        lb = b1;
    }
    int c = 0;
    for(int i = sa; i <= ba; i++){
        for(int j = sb; j <= bb; j++){
            if(vis[i][j] != 0) continue;
            c++;
            vis[sa][sb] = c;
            dfs(i, j, c);
            m = max(tiles, m);
            tiles = 0;
        }
    }
    cout << m << endl;
}

int main(){
    cout.sync_with_stdio(0);
    cin.tie(0);
    solve(); 
    return 0;
}
