#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define oo LLONG_MAX
#define _oo LLONG_MIN
#define vll vector<ll>
#define range(i, x, n) for(i = x; i < n; i++)
using namespace std;

const double PI {acos(-1.0)};

ll solve(vll& v, ll n){
    vector<pii> sorted(n);
    ll i;
    range(i, 0, n){
        sorted[i].first = v[i];
        sorted[i].second = i;
    }
    sort(sorted.begin(), sorted.end(), greater<pii>());
    ll L = oo, R = _oo, ans = 0;
    for(pii p: sorted){
        if(L < p.second)
            ans = max(ans, (p.second - L)*min(v[L], p.first));
        if(R > p.second)
            ans = max(ans, (R - p.second)*(min(v[R], p.first)));
        L = min(L, p.second);
        R = max(R, p.second);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    ll i;
    range(i, 0, t){
        ll n;
        cin >> n;
        vll v(n);
        ll j;
        range(j, 0, n)
            cin >> v[j];
        cout << solve(v, n) << '\n';
    }

	return 0;
}

