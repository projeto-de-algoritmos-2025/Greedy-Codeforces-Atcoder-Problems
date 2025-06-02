#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define pii pair<int,int>
const int MAX = 2e6+10;

void solve(){
    int k, w;
    cin >> k >> w;
    vector<int> ps(k), res, vis(k,0);
    for(auto &x : ps) cin >> x;

    vector<string> ws(w);
    vector<vector<pii>> prompt(w);

    for(int i=0; i<w; ++i){
        cin >> ws[i];
        int q;
        cin >> q;
        while(q--){
            int u, v;
            cin >> u >> v;
            --u;
            prompt[i].emplace_back(u,v);
        }
    }

    for(int i=0; i<w; ++i){
        int best_j=-1, best_v=-1;
        vector<int> val(w,0);
        for(int j=0; j<w; ++j){
            bool ok=1;
            for(auto &[u,v] : prompt[j]){
                if(vis[u]) continue;
                else if(v==ps[u]) val[j]++;
                else ok=0;
            }
            if(val[j] && ok && val[j]>best_v){
                best_j=j;
                best_v=val[j];
            }
        }
        if(~best_j){
            for(auto &[u,v] : prompt[best_j]) vis[u]=1;
            res.push_back(best_j);
        }
    }
    for(int i=0; i<k; ++i) if(!ps[i] && !vis[i]) vis[i]=1;
    if(accumulate(vis.begin(),vis.end(),0ll)==k){
        reverse(res.begin(),res.end());
        for(auto &x : res) cout << ws[x] << ' ';
        cout << endl;
    }
    else cout << "IMPOSSIBLE\n";
}


signed main(){
    ios_base::sync_with_stdio(cin.tie(0));
    int t=1;
    while(t--) solve();
}