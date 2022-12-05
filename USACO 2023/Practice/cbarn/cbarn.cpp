#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n;
    cin >> n;

    int totalCows = 0;

    vector<int> barns(n);
    for (int i = 0; i < n; i++) {
        cin >> barns[i]; 
        totalCows += barns[i];
    }

    int minDist = INT32_MAX;

    for(int startingRoom = 0; startingRoom < n; startingRoom++) {
        int dist = 0;
        int remainingCows = totalCows;
        for(int room = startingRoom; room < startingRoom + n; room++) {
            int roomCap = barns[(room) % n];
            remainingCows -= roomCap;
            dist += remainingCows;
        }
        cerr << dist << "\n";
        minDist = min(minDist, dist);
    }

    cout << minDist;
}