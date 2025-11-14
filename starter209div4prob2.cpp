#include <iostream>
#include <cmath>
#include <cstdio>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        vector<pair<int, int>> pl;
        for (int i = 1; i <= N; ++i) {
            pl.push_back({__gcd(i, N), i});
        }

        sort(pl.begin(), pl.end(), [&](auto &a, auto &b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });

        for (auto &p : pl)
            cout << p.second << " ";
        cout << "\n";
    }

    return 0;
}
