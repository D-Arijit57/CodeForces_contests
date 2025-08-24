#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define v vector
#define p_ priority_queue

const ll INF = 4e18; 

void solve() {
    int n;
    cin >> n;
    v<ll> g(n);
    for (int i = 0; i < n; ++i) {
        cin >> g[i];
    }
    sort(g.begin(), g.end());
    v<ll> dp(n + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i >= 2) {
            dp[i] = min(dp[i], dp[i-2] + g[i-1]);
        }
        if (i >= 3) {
             dp[i] = min(dp[i], dp[i-3] + g[i-3] + g[i-1]);
        }
    }
    cout << dp[n] << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
    solve();
    }
}