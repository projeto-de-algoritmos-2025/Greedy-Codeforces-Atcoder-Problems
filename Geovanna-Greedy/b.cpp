#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define int long long
const int MAX = 2e6+10, oo=1e18+1;
const int mod = 1e9+7; //998'244'353;
using edge = tuple<int, int, int>;
constexpr array<pair<int, int>, 4> dxy = {{{-1, 0}, {0, 1}, {1, 0}, {0, -1}}};

void solve(){
    int n, h, best=0;
    cin >> n >> h;
    vector<pii> xs(n);
    for(auto &x : xs){
        cin >> x.first >> x.second;
        best=max(best,x.first);
    }
    int ans=0;
    sort(xs.rbegin(), xs.rend(), [](auto x, auto y){
        return x.second<y.second;
    });
    for(int i=0; i<n; ++i){
        if(xs[i].second>best) ++ans, h-=xs[i].second;
        if(h<=0){ cout << ans << endl; return; }
    }
    cout << ans+(h+best-1)/best << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    // cin >> t;
    for(int i=1; i<=t; ++i)
        solve();
}