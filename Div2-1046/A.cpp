#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define v vector

bool is_half_possible(ll g1, ll g2) {
    if (g1 > 2 * (g2 + 1)) {
        return false;
    }
    if (g2 > 2 * (g1 + 1)) {
        return false;
    }
    return true;
}
void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll first_half_rioi = a;
    ll first_half_kdoi = b;
    ll second_half_rioi = c - a;
    ll second_half_kdoi = d - b;
    if (is_half_possible(first_half_rioi, first_half_kdoi) && is_half_possible(second_half_rioi, second_half_kdoi)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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