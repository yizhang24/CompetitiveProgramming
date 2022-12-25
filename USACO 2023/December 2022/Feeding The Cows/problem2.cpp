#include <bits/stdc++.h>
using namespace std;

void print(vector<char> vec) {
    // for(auto i : vec) {
    //     cerr << i;
    // }
    // cerr << endl;
}

void solve() {
    int N, movability;

    cin >> N;
    cin >> movability;

    vector<char> cows(N);
    vector<char> farm(N);
    for(int i = 0; i < N; i++) {
        cin >> cows[i];
        farm[i] = '.';
    }

    int patches = 0;

    for(int i = 0; i < N; i++) {
        char token = cows[i];
        int start = max(i - movability, 0);
        int end = min(i + movability + 1, N);
        bool foundInRange = false;

        if(token == '.') {
            continue;
        }

        print(cows);
        print(farm);

        for(int j = start; j < end; j++) {
            if(farm[j] == token) {
                foundInRange = true;
                cows[i] = '.';
                break;
            }
        }

        if(!foundInRange) {
            int bestSpot = 0;
            int bestFedCows = 0;

            for(int j = start; j < end; j++) {
                
                if(farm[j] != '.') {
                    continue;
                }

                int start2 = max(j - movability, 0);
                int end2 = min(j + movability + 1, N);
                int fedCows;
                
                for(int h = start2; h < end2; h++) {
                    if(cows[h] == token) {
                        fedCows++;
                    }
                }

                if(fedCows > bestFedCows) {
                    bestFedCows = fedCows;
                    bestSpot = j;
                }
            }

            farm[bestSpot] = token;
            patches++;
        }

    }   

    std::cout << patches << endl;
    for(auto i : farm) {
        std::cout << i;
    }
    std::cout << endl;
}


int main () {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("output.out", "w", stdout);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}

