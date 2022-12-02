#include<bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int M, N, K;
    cin >> M >> N >> K;


    for (int i = 0; i < M; i++)
    {
        string line = "";
        string c;
        cin >> c;
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < K; k++) {
                line += (c[j]);
            }
        }
        for (int l = 0; l < K; l++) {
            cout << line << "\n";
        }
    }

}