#include<bits/stdc++.h>

using namespace std;

#define v vector 

void solve() {
    int n;
    int k;
    cin >> n >> k;
    string s;
    cin >> s;
    int maxCones = 0;
    int currCones = 0;
    bool poss = true;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            currCones++;
        } else {
            maxCones = max(maxCones, currCones);
            currCones = 0;
        }
    }
    maxCones = max(maxCones, currCones);

    if (maxCones >= k) {
        poss = false;
    }
    if (!poss) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        
        v<int> p(n);
        v<int> oneInd;
        v<int> zInd;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                oneInd.push_back(i);
            } else {
                zInd.push_back(i);
            }
        }
        int currVal = 1;
        for (int Ind : oneInd) {
            p[Ind] = currVal++;
        }
        for (int Ind : zInd) {
            p[Ind] = currVal++;
        }
        for (int i = 0; i < n; ++i) {
            cout << p[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
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
