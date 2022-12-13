#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string msg, csr, n;
    cin >> msg;
    cin >> csr;

    char startingChar = csr[0];

    int lcsr = csr.length();

    for (int i = 0; i < msg.length(); i++) {
        n += msg[i];
        if (n.length() > lcsr && n.substr(n.length() - lcsr) == csr) {
            n.resize(n.length() - lcsr);
        }
        // cerr << n << "\n";
    }
    cout << n;

}
