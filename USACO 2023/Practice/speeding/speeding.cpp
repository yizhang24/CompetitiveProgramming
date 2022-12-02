#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int l = 100;
    int N, M;
    cin >> N >> M;
    
    int head = 0;
    vector<int> road(100);
    for(int i = 0; i < N; i++) {
        int length, speed;
        cin >> length >> speed;
        for(int j = head; j < head + length; j++) {
            road[j] = speed;
        }
        head += length;

    }

    head = 0;
    vector<int> journey(100);
    for(int i = 0; i < M; i++) {
        int length, speed;
        cin >> length >> speed;
        for(int j = head; j < head + length; j++) {
            journey[j] = speed;
        }
        head += length;
    }

    head = 0;
    int max = 0;
    for(int i = 0; i < journey.size(); i++) {
        if (journey[i] > road[i]) {
            max = std::max(max, journey[i] - road[i]);
        }
    }

    cout << max;    
}
