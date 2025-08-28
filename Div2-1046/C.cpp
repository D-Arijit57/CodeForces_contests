#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define v vector

void solve() {
    int n;
    cin >> n;
    v<int> a(n);
    v<v<int>> pos(n + 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pos[a[i]].push_back(i);
    }
    v<int> dp(n + 1, 0);
    v<int> cnt(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1];

        int val = a[i - 1];
        cnt[val]++;
        int c = cnt[val];
        if (c >= val) {
            int startOccIdx = c - val;
            int startposB = pos[val][startOccIdx];
            int canlen = (startposB > 0 ? dp[startposB] : 0) + val;
            if (canlen > dp[i]) {
                dp[i] = canlen;
            }
        }
    }

    cout << dp[n] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
