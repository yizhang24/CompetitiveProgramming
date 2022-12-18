#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    vector<int> v = {7, 7, 7};

    int n;
    cin >> n;

    vector<tuple<int, int, int>> changes;

    for(int i = 0; i < n; i++) {
        int a, b, c;
        string b_;
        cin >> a >> b_ >> c;

        switch(b_[0]) {
            case 'B':
                b = 0;
                break;
            case 'E':
                b = 1;
                break;
            case 'M':
                b = 2;
                break;
            default:
                b = 0;  
        }
        changes.push_back(make_tuple(a, b, c));
    }

    sort(changes.begin(), changes.end());

    // for (auto &&i : changes) {
    //     cerr << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << "\n";
    // }

    string high;
    int switches = 0;
    for (int i = 0; i < n; i++) {
        auto &&change = changes[i];
        
        v[get<1>(change)] += get<2>(change);

        int max = 0;
        string highest;

        for(int j = 0; j < 3; j++) {
            if(v[j] > max) {
                // cerr << j;
                max = v[j];
            }
        }

        for(int j = 0; j < 3; j++) {
            if(v[j] == max) {
                // cerr << j;
                max = v[j];
                highest += std::to_string(j);
            }
        }

        if(highest != high) {
            cerr << "switch" << "\n";
            high = highest;
            switches++;
        }

        cerr << v[0] << " " << v[1] << " " << v[2] << "\n";
        cerr << high << "\n";
    }

    cout << switches;
}