#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    bool posi = false;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i+1]) {
            posi = true;
            break; 
        }
    }

    if (posi) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin >> tt; 
    while (tt--) {
        solve();
    }

    return 0;
}
