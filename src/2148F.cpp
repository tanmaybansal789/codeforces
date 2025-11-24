#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        // Read input and sort
        int n;
        cin >> n;
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;

            a[i].resize(k);
            for (int& x : a[i]) {
                cin >> x;
            }
        }
        ranges::sort(a);

        // Generate result
        int i = 0, j = 0;
        while (i < a.size()) {
            if (j >= a[i].size()) {
                i++;
            } else {
                cout << a[i][j++] << ' ';
            }
        }
        cout << '\n';
    }
}