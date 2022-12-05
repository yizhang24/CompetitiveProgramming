#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int f, b;
    cin >> f >> b;
    b -=f; f = 0;

    cerr << "F is at " << f << "\nB is at " << b << "\n";

    int dist = 0, toMove = 1;

    // use a for loop instead
    while (b > 0 ? f < b : f > b)
    {
        dist++;
        int diff = toMove - f;
        f += (0 < diff) - (diff < 0);
        cerr << "Moved " << dist << ", farmer at " << f << "\n";
        if (f == toMove)
        {
            toMove *= -2;
        }
        
    }

    // dist -= (f - b);

    

    cout << dist;
    
}