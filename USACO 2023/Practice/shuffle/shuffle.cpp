#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> o(n);

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < n; i++ ){
        cin >> o[i];
    }

    for(int i = 0; i < 3; i++) {
        vector<int> p(o);
        for(int r = 0; r < n; r++) {
            p[r] = o[s[r] -1];
        }
        o = p;
    }

    for(int i = 0; i < n; i++) {
        cout << o[i] << "\n";
        cerr << o[i] << "\n";
    }
}