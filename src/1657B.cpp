#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int n, m, l, x, y;
    cin >> n >> m >> l >> x >> y;

    vector<pair<int, int>> buses(n);

    for (auto& [s, d] : buses) {
        cin >> s >> d;
    }

    for (int i = 0; i < m; i++) {
        int p;
        cin >> p;


        if (y >= x) {
            cout << static_cast<double>(l - p) / x << '\n';
        }

        double t = 0;
        // For each bus, we can determine if it is worthwhile:
        // wait time + time to reach dest < time to walk to dest
        while (p < l) {
            for (int j = 0; j < n; j++) {
                if (static_cast<int>(buses[i].first + x * t) > p ||
                    buses[i].second <
            }
        }
    }
}