#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ii> vii;
typedef tuple <int, int, int> i3;
const ll MAX = 1e7+5, INF = 1e12;

int f = 1000;
bool adj[MAX][4];// 0 esq 1 dir 2 cima 3 baixo
ii dir[]={{0,-1},{0,1},{-1,0},{1,0}};
int vis[MAX];
int sa = MAX, sb = MAX, ba = 0, bb = 0, m = 0, tiles = 0;

bool valid(int x, int y){
    return (x < sa || x >= ba || y < sb || y >= bb)? false : true;
}

void dfs(int x, int y, int c){
    tiles++;
    for(int i = 0; i < 4; i++){
        auto [dx, dy] = dir[i];
        int xx = x + dx, yy = y + dy;
        int tar = xx*f+yy;

        if(!valid(xx, yy) ||vis[tar] != 0 || adj[x*f+y][i])continue;
        // cout <<"X = " << x<<" Y = "<<y<<" DX = " << dx<<" DY = "<<dy << " I = " << i << " TAR = " << tar<<" " <<endl;
        // cout <<"DX = " << dx<<" DY = "<<dy <<" I = " << i << " TAR = " << tar << endl;
        vis[tar] = c;
        dfs(xx, yy, c);
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
        if(i != 0){
            if(la == a){
                if(lb > b)swap(lb, b);//lb sempre menor
                for(int j = lb; j < b; j++){// 0 esq 1 dir 2 cima 3 baixo
                    adj[(a-1)*f+j][3] = 1;
                    adj[a*f+j][2] = 1;
                    // cout << "I[3] "<< (a-1)*f+j << " I[2] "<< (a)*f+j << endl;
                }
            }else{
                if(la > a)swap(la,a);//la sempre menor
                for(int j = la; j < a; j++){
                    adj[j*f+b-1][1] = 1;
                    adj[j*f+b][0] = 1;
                    // cout << "I[1] "<< (j)*f+b-1 << " I[0] "<< j*f+b << endl;
                    // if(j*f+b == 3004)cout << adj[j*f+b][0] << endl;
                }
            }
        }
        la = a1;
        lb = b1;
    }
    int c = 0;
    for(int i = sa; i <= ba; i++){
        for(int j = sb; j <= bb; j++){
            if(vis[i*f+j] != 0) continue;
            vis[i*f+j] = ++c;
            // cout << i*f+j << endl;
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
