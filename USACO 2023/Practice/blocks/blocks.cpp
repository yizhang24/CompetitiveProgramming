#include <bits/stdc++.h>
using namespace std;

constexpr int numletters = 26;

using arr = array<int, numletters>;

void countChars(string &word, arr &arrayToFill) {
    for(char c : word) {
        arrayToFill[c - 'a']++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n;
    cin >> n;

    arr answer = {};

    while(n--) {
        string word1, word2;
        cin >> word1 >> word2;
        cerr << word1 << word2;


        arr freq1 = {};
        arr freq2 = {};

        countChars(word1, freq1);
        countChars(word2, freq2);

        for(int i = 0; i < numletters; i++) {
            answer[i] += std::max(freq1[i], freq2[i]);
        }
    }

    for(int i = 0; i < numletters; i++) {
        cout << answer[i] << "\n";
    }
}